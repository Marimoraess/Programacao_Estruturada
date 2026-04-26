//soma dos numeros dentro do vetor
#include <stdio.h>
int main(){
    int n,soma=0;
    scanf("%d",&n);
    int vet[n];
    for(int c=0;c<n;c++){
        scanf("%d",&vet[c]);
        soma+=vet[c];
    }
    printf("%d",soma);

}