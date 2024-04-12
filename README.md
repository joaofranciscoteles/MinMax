# MinMax

# Introdução
<p>Em diversos campos da computação, a otimização do tempo de execução de algoritmos é uma questão crucial.Neste trabalho, foram criados três algoritmos diferentes(MinMax 1, MinMax2 e MinMax3), os quais exercem a mesma função, que é encontrar um valor máximo e mínimo dentro de um conjunto de números. Entretanto,cada um dos algoritmos foram implementados de diferentes maneiras e recebiam dados com diferentes tamanhos, com o intuito de verificar os impactos no tempo de execução que diferentes implementações podem ter com diferentes tamanhos de entrada. </p>

# Objetivos
<p>Neste trabalho foram implementados 3 tipos diferentes de funções MinMax e criados 3 tipos de vetores(aleatório, crescente e decrescente), as funções recebiam os três tipos de vetores que variavam de tamanho. A diferença entre os tamanhos, tipo de função e tipo de vetor foram criados visando uma análise comparativa para melhor compreensão de como essas mudanças podem impactar no tempo de execução de um programa.</p>

# Implementação
<p>
  - Main.cpp: A main foi utilizada para a chamada das funções da classe MinMax, bem como para a criação do vetores aleatório, crescente e decrescente. Esses vetores foram criados na main com o intutito das funções minmax 1, 2 e 3 utilizarem dos mesmos vetores para maior precisão. Na main também foi criado um vetor com os tamanhos, que foram percorridos por um for para variar o tamanho dos vetores criados.
  -MinMax.hpp:Contém a declaração das variáveis e funções envolvidas no processo.
  - MinMax.cpp: Na classe MinMax foram implementadas as funções Minmax, funções para ordenação, funções para contagem de tempo e para escrita em um arquivo .txt.
</p>

- void MinMax::Gerador_aleatorios(int *&vetor,int tamanho): Essa função gerava números aleatórios para serem utilizados no vetor aleatório e depois ordenados. Utilizou-se da função rand() para tal finalidade.
- void MinMax::ordena_crescente(int *vetor_aleatorio, int *&vetor_crescente, int tamanho): Essa função ordena o vetor aleatório e salva em um vetor crescente. Utilizou-se da função sort() para tal finalidade, pois se mostrou a mais veloz em termos de ordenação para maior agilidade de execução do programa.
- void MinMax::escrevearquivo(string nome_arquivo,int tamanho,int tempo_1,int tempo_2, int tempo_3): Essa função foi criada para salvar as médias dos tempos de execução em um arquivo .txt.


# MinMax 1

<p>
<div align=center>
<img src="Captura de tela de 2024-04-12 10-05-28.png" width="500px">
</div>
No primeiro algoritmo minmax 1 ao percorrer o vetor para encontrar o maior e o menor elemento, a função utiliza dois laços if para comparar cada elemento com os valores atuais de máximo e mínimo.    A função percorre o vetor a partir do segundo elemento até o último (i começa em 1 e vai até n - 1). Para cada elemento do vetor, a função verifica se ele é maior que o valor atual de max e se é menor que o valor atual de min. Se o elemento for maior que max, atualiza-se o valor de max para o valor do elemento atual. Se o elemento for menor que min, atualiza-se o valor de min para o valor do elemento atual.

</p>

# MinMax 2
<p>
<div align=center>
<img src="Captura de tela de 2024-04-12 14-26-25.png" width="500px">
</div>

No segundo algoritmo utiliza-se o else if ao invés de 2 if's.O uso do else if na função MinMax2 faz com que o código execute apenas uma das condições dentro do loop de comparação. Isso significa que, uma vez que um elemento seja verificado como maior que max, a segunda condição (vetor[i] < min) não será avaliada se a primeira for verdadeira.

</p>

# MinMax 3
<p>
<div align=center>
<img src="Captura de tela de 2024-04-12 14-34-48.png" width="500px">
</div>
O terceiro algoritmo reduz a quantidade de comparações necessárias para encontrar o máximo e o mínimo, pois compara pares de elementos em vez de comparar cada elemento individualmente.    O loop começa a partir do terceiro elemento do vetor (i = 2) e continua até fimDoAnel (que é o último índice do vetor). Para cada par de elementos consecutivos no vetor, a função verifica qual é o maior e o menor elemento entre eles. Se o elemento na posição i for maior que o elemento na posição i+1, ele é comparado com o valor atual de max e, se necessário, atualiza-se max. O mesmo é feito para o elemento na posição i+1 em relação a min. Se o elemento na posição i+1 for maior que o elemento na posição i, então são feitas as mesmas comparações, mas invertendo os papéis de max e min.
</p>

# Cálculo do Tempo
Para medição do tempo de execução foi utilizado a biblioteca chronos. Através dessa biblioteca pode-se medir o tempo em diferentes medidas(s,ns,ms) e com isso o tempo foi medido em ms para maior precisão dos resultados. Além disso, mediu-se o tempo 10x e fez uma média dos tempos para maior confiabilidade do resultado.

# Resultados Esperados

# Resultados obtidos

# Conclusão
