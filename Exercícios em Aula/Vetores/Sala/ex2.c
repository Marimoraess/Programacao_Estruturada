#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int vet[n];
    int pos=0; 

    for(int c=2; c<=n; c++){
        int cont=0;

        for(int i=1; i<=c; i++){
            if(c%i==0){
                cont++;
            }
        }

        if(cont==2){
            vet[pos]=c; 
            pos++;
        }
    }

    for(int i=0; i<pos; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}