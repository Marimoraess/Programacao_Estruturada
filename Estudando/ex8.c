//Calcule a soma dos fatoriais dos dígitos e diga se é igual ao num
#include <stdio.h>
int main(){
    int n,soma=0,fat,dig,num;
    scanf("%d",&n);
    num=n;
    while(n>0){
        dig=n%10;//pega o ult dig
        fat=1; 
        for(int c=1;c<=dig;c++){
            fat*=c;//fatoral até o dig
        }
        soma+=fat;
        n/=10;
    }
    printf("%d",soma);



}