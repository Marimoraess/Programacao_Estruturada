// Receba dois vetores e imprima os numeros que aparecem nos dois vetores e a quantidade destes numeros
#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int A[n];
    int B[m];
    //armazenar vetores de A
    for(int c=0;c<n;c++){
        scanf("%d",&A[c]);
    }
      //armazenar vetores de B
    for(int c=0;c<m;c++){
        scanf("%d",&B[c]);
    }
    //COMPARAÇÃO
    int cont=0;
    for(int c=0;c<n;c++){
        for(int j=0;j<m;j++){
            if(A[c]==B[j]){
                printf("%d ",A[c]);
                cont++;
            }
        }
    }
    printf("\n%d numeros",cont);
}