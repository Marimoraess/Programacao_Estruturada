//Implemente um programa que leia infinitamente um número n e diga se ele é primo ou não.
//O programa termina quando n ≤ 1.
#include <stdio.h>

int main()
{
    while (1){
        int n,cont=0;
        printf("Digite um número: ");
        scanf("%d",&n);
        if (n<2){
            break;
        }
        for (int c=1;c<=n;c++){
            if(n%c==0){
                cont++;
            }
        }
        if (cont>2){
            printf("Não é primo\n");
        }
        else{
            printf("É primo\n");
        }
    }

    return 0;
}