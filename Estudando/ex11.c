// maior elemento dentro do vetor
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int vet[n];
    
    for (int c = 0; c < n; c++)
    {
        scanf("%d", &vet[c]);
    }
    int maior= vet[0];
    for(int c=1;c<n;c++){
        if(vet[c]>maior){
            maior=vet[c];
        }
    }
    printf("%d",maior);
}
