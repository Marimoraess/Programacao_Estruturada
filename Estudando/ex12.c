// contar pares dentro de um vetor
#include <stdio.h>
int main()
{
    int n, cont = 0;
    scanf("%d", &n);
    int vet[n];
    for (int c = 0; c < n; c++)
    {
        scanf("%d", &vet[c]);
        if (vet[c]%2==0){
            cont++;
        }
    }
    printf("Tem %d pares",cont);
}