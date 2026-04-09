#include <stdio.h>
#include <stdlib.h>

int maxRe(int *vet, int n){
    if(n == 1){
        return vet[0];
    }

    int maxRest = maxRe(vet, n - 1);

    if (vet[n - 1] > maxRest){
        return vet[n - 1];
    }
    else {
        return maxRest;
    }
}

int main(){
    int n;
    printf("Tamanho do vet: ");
    scanf("%d", &n);

    int *vet = (int *) malloc(n * sizeof(int));

    if(vet == NULL){
        printf("Erro\n");
        return 1;
    }

    printf("Os elementos do vetor:\n");
    for(int c = 0; c < n; c++){
        scanf("%d", &vet[c]);
    }

    int maior = maxRe(vet, n);

    printf("Maior valor: %d\n", maior);

    free(vet);

    return 0;
}