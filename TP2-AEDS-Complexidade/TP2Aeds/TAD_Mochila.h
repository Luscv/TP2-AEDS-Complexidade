#ifndef TP2AEDS_TAD_MOCHILA_H
#define TP2AEDS_TAD_MOCHILA_H
#include "TAD_Objeto.h"
#define MaxTam 40

typedef int Apontadorm;

typedef struct{
    TypeObjeto objeto[MaxTam];
    Apontadorm primeiro, ultimo;
}TypeMochila;

void combinationUtil(TypeObjeto objeto[], int quantidade, int capacidade, int index, TypeObjeto data[], int i);
void printCombination(TypeObjeto objeto[], int quantidade, int capacidade);
int InsereObj(TypeMochila *mochila, TypeObjeto *objeto, TypeItens itens);
int MochilaVazia(TypeMochila *mochila);

#endif //TP2AEDS_TAD_MOCHILA_H
