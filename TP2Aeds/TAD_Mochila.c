#include "TAD_Mochila.h"
#include "TAD_Objeto.c"

int MochilaVazia(TypeMochila *mochila){
    mochila->primeiro = Inicio;
    mochila->ultimo = mochila->primeiro;
}

void printCombination(TypeObjeto objeto[], int quantidade, int capacidade){
    // A temporary array to store all combination one by one
    TypeObjeto data[capacidade];

    // Print all combination using t,;
    // emprary array 'data[]'
    combinationUtil(objeto, capacidade, quantidade, 0, data, 0);
}

/* arr[]  ---> Input Array
n      ---> Size of input array
r      ---> Size of a combination to be printed
index  ---> Current index in data[]
data[] ---> Temporary array to store current combination
i      ---> index of current element in arr[]     */
void combinationUtil(TypeObjeto objeto[], int capacidade, int quantidade, int index, TypeObjeto data[], int i){
    // Current combination is ready, print it
    if (index == capacidade){
        for (int j=0; j<capacidade; j++)
            printf("%d ",data[j]);
        printf("\n");
        return;
    }

    // When no more elements are there to put in data[]
    if (i >= quantidade) {
        return;
    }
    // current is included, put next at next location
    data[index] = objeto[i];
    combinationUtil(objeto, quantidade, capacidade, index+1, data, i+1);

    // current is excluded, replace it with next (Note that
    // i+1 is passed, but index is not changed)
    combinationUtil(objeto, capacidade, quantidade, index, data, i+1);
}

int InsereMochila(TypeMochila *mochila, TypeObjeto *objeto, TypeComb *combatual, int capacidade){
    for (int i = 0; i < capacidade; ++i) {
        mochila->objeto[i] = combatual->objeto[i];
        printf("Melhor combinacao:\n");
        printf("objeto %d:", capacidade);
        printf("peso-%d valor-%d", mochila->objeto[i].peso, mochila->objeto[i].valor);
        printf("\n");
    }
    printf("Peso Total: %d\n", combatual->pesototal);
    printf("Peso Total: %d\n", combatual->valortotal);

}



int CombinacaoAtual(TypeComb *combatual, TypeObjeto *objeto, int pesototal, int valortotal, TypeObjeto data[], int capacidade){
    int i;
    if(combatual->valortotal == NULL && combatual->pesototal == NULL){
        for (i = 0; i < capacidade; ++i) {
            combatual->objeto[i] = data[i];
        }
        combatual->pesototal = pesototal;
        combatual->valortotal = valortotal;
    } else{
        if (combatual->valortotal <= valortotal && pesototal <= 40){
            if(combatual->valortotal == valortotal && combatual->pesototal > pesototal){
                for (i = 0; i < capacidade; ++i) {
                    combatual->objeto[i] = data[i];
                }
                combatual->pesototal = pesototal;
                combatual->valortotal = valortotal;
            }
        }else{
            return 0;
        }
    }
}
