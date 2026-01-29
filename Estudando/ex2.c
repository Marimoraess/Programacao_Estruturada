//Implemente um programa que leia infinitamente um número n e mostre a soma de 
//todos os seus divisores. O programa termina quando n < 1.
#include <stdio.h>

int main()
{
    while (1){
        int n, soma=0;
        printf("Digite um número: ");
        scanf("%d",&n);
        if (n<1){
            break;
        }
        for (int c=1;c<=n;c++){
            if(n%c==0){
                soma+=c;
            }
        }
        printf("Soma dos divisores: %d\n",soma);

    }

    return 0;
}