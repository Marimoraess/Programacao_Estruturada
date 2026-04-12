//Receba um número inteiro positivo n e calcule a soma dos seus dígitos.
#include <stdio.h>
int main(){
    int n,soma=0;
    scanf("%d",&n);
    while(n>0){
        soma=soma+ n%10; //soma o ultimo num
        n=n/10; //deleta o ultimo
        

    }
    printf("%d",soma);
}