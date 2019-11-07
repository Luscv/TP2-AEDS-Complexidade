//TP2-AEDS-COMPLEXIDADE
//Lucas Barros - 3511
//Vinícius Julio - 3495

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "TAD_mochila.h"
#include "TAD_objeto.h"

int main() {
    TypeItens itens;
    TypeMochila mochila;
    TypeObjeto *objeto;
    int newpeso, newvalor, pesototal = 0, valortotal = 0;
    int opcheck, entrada;
    int r, n;
    char nome_arq[25];
    //Entrada por Arquivo
    FILE *ptr_arq;
    FazlistaItemVazia(&itens);
    MochilaVazia(&mochila);
    do {
        printf("Digite o metodo de entrada:\n");
        printf("1 - Arquivo\n");
        printf("2 - Interativo\n");
        fflush(stdin);
        scanf("%d", &entrada);
        if (entrada == 1) {
            printf("Insira o nome do arquivo:\n");
            scanf("%s", nome_arq);

            ptr_arq = fopen(nome_arq, "r");
            if (ptr_arq == NULL) {
                printf("Erro na abertura!\n");
            }
            fscanf(ptr_arq, "%d", &n);
            FazListaItensArquivo(ptr_arq, &itens, objeto, newpeso, newvalor, n);
            do {
                printf("*****************************************\n");
                printf("|               Menu                    |\n");
                printf("|                                       |\n");
                printf("| Opcoes                                |\n");
                printf("| 1 - Fazer a combinacao                |\n");
                printf("| 2 - Imprimir lista de objetos         |\n");
                printf("| 0 - Encerrar Programa                 |\n");
                printf("*****************************************\n");
                fflush(stdin);
                scanf("%d", &opcheck);
                if (opcheck == 1){
                    clock_t Ticks[2];
                    Ticks[0] = clock();
                    for (r = 1; r < n; ++r) {
                        mochila.capacidade = r;
                        Combinacao(&itens, r, n, &mochila, pesototal, valortotal);
                    }
                    InsereMochila(&mochila, r);
                    Ticks[1] = clock();
                    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
                    printf("\n\nTempo gasto: %g ms.\n\n", Tempo);
                    getchar();

                }else if (opcheck == 2) {
                    ImprimeListaItens(&itens, n);
                }
            }while (opcheck != 0);
        } else if (entrada == 2) {
            printf("Digite a quantidade de itens:\n");
            scanf("%d", &n);
            do {
                printf("*****************************************\n");
                printf("|               Menu                    |\n");
                printf("|                                       |\n");
                printf("| Opcoes                                |\n");
                printf("| 1 - Cadastrar Objeto                  |\n");
                printf("| 2 - Fazer a combinacao                |\n");
                printf("| 3 - Imprimir lista de objetos         |\n");
                printf("| 0 - Encerrar Programa                 |\n");
                printf("*****************************************\n");
                fflush(stdin);
                scanf("%d", &opcheck);
                if (opcheck == 1) {
                    FazListaItens(&itens, objeto, newpeso, newvalor, n);

                }else if (opcheck == 2) {
                    clock_t Ticks[2];
                    Ticks[0] = clock();
                    for (r = 1; r < n; ++r) {
                        mochila.capacidade = r;
                        Combinacao(&itens, r, n, &mochila, pesototal, valortotal);
                    }
                    InsereMochila(&mochila, r);
                    Ticks[1] = clock();
                    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
                    printf("\n\nTempo gasto: %g ms.\n\n", Tempo);
                    getchar();
                } else if (opcheck == 3) {
                    ImprimeListaItens(&itens, n);
                }
            } while (opcheck != 0);
        }
    } while (entrada != 1 && entrada != 2);
    return 0;
}