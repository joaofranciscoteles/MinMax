#ifndef MINMAX_HPP
#define MINMAX_HPP
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <fstream>

using namespace std;

class MinMax{

public:

void MinMax1(int *vetor, int n,int &max, int &min);

void MinMax2(int *vetor, int n,int &max, int &min);

void MinMax3(int *vetor, int n,int &max, int &min);

void Gerador_aleatorios(int *&vetor, int tamanho);

void ordena_crescente(int *vetor_aleatorio, int *&vetor_crescente, int tamanho);

void ordena_decrescente(int *vetor_aleatorio, int *&vetor_decrescente, int tamanho);

long long tempo_MinMax1(int *vetor, int tamanho);

long long tempo_MinMax2(int *vetor, int tamanho);

long long tempo_MinMax3(int *vetor,int tamanho);

void escrevearquivo(string nome_arquivo,int tamanho,int tempo_1,int tempo_2, int tempo_3);




};

#endif