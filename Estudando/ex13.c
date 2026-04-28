//inverter vetor
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int vet[n];
    for(int c=0;c<n;c++){
        scanf("%d",&vet[c]);
    }
    for(int c=n-1;c>=0;c-- ){
        printf("%d ",vet[c]);
    }






}