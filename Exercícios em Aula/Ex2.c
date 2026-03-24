/* Escreva um programa que receba três números. O programa deve
imprimir a palavra “soma” se a soma de dois deles for igual ao outro número, caso contrário, o
programa deve imprimir a palavra “multi” se a multiplicação de dois deles for igual ao outro
número. Caso nenhuma das duas possibilidades for verdade, então imprimir a palavra “par” se
a soma dos três números for par, e imprimir a palavra “ímpar” caso contrário.*/


#include <stdio.h>

int main()
{
    int n1,n2,n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if(n1+n2==n3 || n2+n3==n1 || n3+n1==n2){
        printf("soma");
    }
    else if(n1*n2==n3 || n2*n3==n1 || n3*n1==n2){
        printf("multi");
    }
    else if((n1+n2+n3)%2==0){
        printf("par");
    }
    else{
        printf("impar");
    }

    return 0;
}