// Implemente um programa que leia “INFINITAMENTE” um número n, e retorne todos os
//divisores dele. Esse programa pára quando n < 2.

#include <stdio.h>

int main()
{
    while (1){
        int n;
        printf("Insira um número: ");
        scanf("%d",&n);
        if (n<2){
            break;
        }
        for (int c=1;c<n;c++){
            if(n%c==0){
                printf("%d\n",c);
            }
        }
    }

    return 0;
}