//inverter vetor
#include <stdio.h>

int main(){
    int n,num,cont=0;
    scanf("%d",&n);
    int vet[n];

    for(int c=0;c<n;c++){
        scanf("%d",&vet[c]);
    }
    printf("Numero que deseja procuurar ");
    scanf("%d",&num);
    for(int c=0;c<n;c++){
        if(vet[c]==num){
            cont++;
        }
    }
    printf("o numero %d aparece %d vezes",num,cont);


}