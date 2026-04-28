#include <stdio.h>

#define MAX 10

int main() {
    int vetor[MAX];
    int tam = 0;
    int opcao, elemento, pos, i;

    while(1) {
        printf("\n--- Menu ---\n");
        printf("1) imprimir\n");
        printf("2) inserir\n");
        printf("3) adicionar\n"); 
        printf("10) Sair\n");
        printf("----------\n");
        printf("opcao:");
        scanf("%d", &opcao);

        if (opcao == 10) break;

        if (opcao == 1) {
            printf("vetor (tam=%d) = ", tam);
            for (i = 0; i < tam; i++) {
                printf("%d, ", vetor[i]);
            }
            printf("\n");
        } 
        
        
        else if (opcao == 2) {
            printf("posicao e elemento := ");
            scanf("%d %d", &pos, &elemento);

            if (tam < MAX && pos <= tam && pos >= 0) {
                for (i = tam; i > pos; i--) {
                    vetor[i] = vetor[i - 1];
                }
                vetor[pos] = elemento;
                tam++;
            } else {
                printf("posicao invalida\n");
            }
        }

       
        else if (opcao == 3) {
            printf("elemento := ");
            scanf("%d", &elemento);

            if (tam < MAX) {
                vetor[tam] = elemento; 
                tam++;                 
            } else {
                printf("vetor ja esta cheio\n");
            }
        }
        else if(opcao ==4){
            printf("posicao= ");
            scanf("%d",&pos);

            if()
        }
    }

    return 0;
}