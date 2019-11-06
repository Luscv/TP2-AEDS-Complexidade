#ifndef TP2AEDS_TAD_MOCHILA_H
#define TP2AEDS_TAD_MOCHILA_H
#include "TAD_Objeto.h"
#define MaxTam 40

typedef int Apontadorm;

typedef struct{
    TypeObjeto objeto[MaxTam];
    Apontadorm primeiro, ultimo;
}TypeMochila;

typedef struct{
    TypeObjeto objeto[40];
    int pesototal, valortotal;
}TypeComb;

void combinationUtil(TypeObjeto objeto[], int quantidade, int capacidade, int index, TypeObjeto data[], int i);
void printCombination(TypeObjeto objeto[], int quantidade, int capacidade);
int InsereMochila(TypeMochila *mochila, TypeObjeto *objeto, TypeComb *combatual, int capacidade);
int MochilaVazia(TypeMochila *mochila);

int CombinacaoAtual(TypeComb *combatual, TypeObjeto *objeto, int pesototal, int valortotal, TypeObjeto data[], int capacidade);
#endif //TP2AEDS_TAD_MOCHILA_H
