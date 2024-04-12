#include <iostream>
#include "MinMax.hpp"

using namespace std;

int main(){
    
    MinMax minmax;

    vector<int> tamanhos={1000,10000,100000,500000};

    
    for(int tamanho: tamanhos){
        

    int *vetor_aleatorio = new int[tamanho];
    int *vetor_crescente = new int[tamanho];
    int *vetor_decrescente = new int[tamanho];
    long long tempo1_minmax1,tempo2_minmax1,tempo3_minmax1;
    long long tempo1_minmax2,tempo2_minmax2,tempo3_minmax2;
    long long tempo1_minmax3,tempo2_minmax3,tempo3_minmax3;

    minmax.Gerador_aleatorios(vetor_aleatorio,tamanho);
    minmax.ordena_crescente(vetor_aleatorio,vetor_crescente,tamanho);
    minmax.ordena_decrescente(vetor_aleatorio,vetor_decrescente,tamanho);
     
  
    tempo1_minmax1 = minmax.tempo_MinMax1(vetor_aleatorio, tamanho);
    tempo2_minmax1 = minmax.tempo_MinMax1(vetor_crescente, tamanho);
    tempo3_minmax1 = minmax.tempo_MinMax1(vetor_decrescente, tamanho);


    tempo1_minmax2 = minmax.tempo_MinMax2(vetor_aleatorio, tamanho);
    tempo2_minmax2 = minmax.tempo_MinMax2(vetor_crescente, tamanho);
    tempo3_minmax2 = minmax.tempo_MinMax2(vetor_decrescente, tamanho);

    tempo1_minmax3 = minmax.tempo_MinMax3(vetor_aleatorio, tamanho);
    tempo2_minmax3 = minmax.tempo_MinMax3(vetor_crescente, tamanho);
    tempo3_minmax3 = minmax.tempo_MinMax3(vetor_decrescente, tamanho);


    minmax.escrevearquivo("dataset/MinMax1.txt",tamanho,tempo1_minmax1,tempo2_minmax1,tempo3_minmax1);
    minmax.escrevearquivo("dataset/MinMax2.txt",tamanho,tempo1_minmax2,tempo2_minmax2,tempo3_minmax2);
    minmax.escrevearquivo("dataset/MinMax3.txt",tamanho,tempo1_minmax3,tempo2_minmax3,tempo3_minmax3);
        


    }
    
    
    
    return 0;


}