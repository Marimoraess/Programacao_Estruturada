//Armazenar 10 valores inteiros em um vetor e depois calcular a sua média
#include <stdio.h>
int main(){
    int vet[10],soma=0;
    float med=0;
    for(int c=0;c<10;c++){
        printf("Digite o n na pos %d:",c);
        scanf("%d",&vet[c]);
        soma+=vet[c];
        med=soma/10.0;
    }
    
    printf("%.2f ",med);
    
    
}