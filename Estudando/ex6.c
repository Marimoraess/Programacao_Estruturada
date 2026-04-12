#include <stdio.h>
#include <math.h>

int main(){
    int n, temp, cont = 0, soma = 0;

    scanf("%d", &n);
    temp = n;

    while(temp > 0){
        cont++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0){
        int dig = temp % 10;
        soma += (int)pow(dig, cont);
        temp /= 10;
    }

    if(soma == n){
        printf("SIM");
    } else {
        printf("Nao");
    }

    return 0;
}