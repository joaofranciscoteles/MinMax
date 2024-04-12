#include "MinMax.hpp"


void MinMax::MinMax1(int *vetor, int n,int &max, int &min){

max=vetor[0];
min=vetor[0];


for(int i=1; i < n; i++){
 if(vetor[i]>max){
    max=vetor[i];
 }
 if(vetor[i]<min){
    min=vetor[i];
 }
}

}

void MinMax:: MinMax2(int *vetor, int n,int &max, int &min){
max=vetor[0];
min=vetor[0];


for(int i=1; i < n; i++){
 if(vetor[i]>max){
    max=vetor[i];
 }
 else if(vetor[i]<min){
    min=vetor[i];
 }
}
}


void MinMax::Gerador_aleatorios(int *&vetor,int tamanho){
    
    for(int i=0;i<tamanho;i++){
        vetor[i]=rand()%1001;
    }

}

void MinMax::ordena_crescente(int *vetor_aleatorio, int *&vetor_crescente, int tamanho){
   for(int i=0;i<tamanho;i++){
      vetor_crescente[i]=vetor_aleatorio[i];
   }
   sort(vetor_crescente,vetor_crescente+tamanho);
}


void MinMax::ordena_decrescente(int *vetor_aleatorio, int *&vetor_decrescente, int tamanho){
    for(int i=0;i<tamanho;i++){
      vetor_decrescente[i]=vetor_aleatorio[i];
   }
     sort(vetor_decrescente,vetor_decrescente+tamanho,greater<int>());
}

long long MinMax::tempo_MinMax1(int *vetor, int tamanho){
   int max,min;
   long long tempo_total=0;
   for(int i=0;i<10;i++){
    
    auto inicio = chrono::high_resolution_clock::now();
     MinMax1(vetor,tamanho,max,min);
    auto resultado = chrono::high_resolution_clock::now() - inicio;
    long long microseconds = chrono::duration_cast<chrono::microseconds>(resultado).count();
    cout<<"Tempo "<<i<<": "<<microseconds<<"ms"<<endl;
   tempo_total=tempo_total+microseconds;
   }

   return tempo_total/10;
}

long long MinMax::tempo_MinMax2(int *vetor, int tamanho){
int max,min;
   long long tempo_total=0;
   for(int i=0;i<10;i++){
    
    auto inicio = chrono::high_resolution_clock::now();
     MinMax2(vetor,tamanho,max,min);
    auto resultado = chrono::high_resolution_clock::now() - inicio;
    long long microseconds = chrono::duration_cast<chrono::microseconds>(resultado).count();
    cout<<"Tempo "<<i<<": "<<microseconds<<"ms"<<endl;
   tempo_total=tempo_total+microseconds;
   }

   return tempo_total/10;


}

void MinMax::MinMax3(int *vetor, int n,int &max, int &min){
int fimDoAnel = 0; 

    if(n % 2 > 0){
        vetor[n] = vetor[n-1];
        fimDoAnel = n;
    } else 
        fimDoAnel = n-1;

    if(vetor[0] > vetor[1]){
        max = vetor[0];
        min = vetor[1];
    } else {
        max = vetor[1];
        min = vetor[0];
    }

    for(int i = 2; i < fimDoAnel; i+=2){
        if(vetor[i] > vetor[i+1]){
            if(vetor[i] > max)
                max = vetor[i];
            if(vetor[i+1] < min)
                min = vetor[i+1];
        } else {
            if(vetor[i+1] > max)
                max = vetor[i+1];
            if(vetor[i] < min)
                min = vetor[i];
        }
    }
}

long long MinMax::tempo_MinMax3(int *vetor,int tamanho){
int max,min;
   long long tempo_total=0;
   for(int i=0;i<10;i++){
    
    auto inicio = chrono::high_resolution_clock::now();
     MinMax3(vetor,tamanho,max,min);
    auto resultado = chrono::high_resolution_clock::now() - inicio;
    long long microseconds = chrono::duration_cast<chrono::microseconds>(resultado).count();
    cout<<"Tempo "<<i<<": "<<microseconds<<"ms"<<endl;
   tempo_total=tempo_total+microseconds;
   }

   return tempo_total/10;
}

void MinMax::escrevearquivo(string nome_arquivo,int tamanho,int tempo_1,int tempo_2, int tempo_3){
    ofstream arquivo;
    arquivo.open(nome_arquivo,ios::app);

    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        exit(1);
    }

     arquivo << tamanho << " ";

     arquivo<<tempo_1<<" ";
     arquivo<<tempo_2<<" ";
     arquivo<<tempo_3<<endl;

     arquivo.close();

}
