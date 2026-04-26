// Receba dois vetores e imprima os numeros que aparecem nos dois vetores e a quantidade destes numeros
#include <stdio.h>
int main()
{

    int tamA, tamB;
    printf("tamanho do vetor de A:");
    scanf("%d", &tamA);
    int vet1[tamA];//cria um vetor do tamanho de tamA 

    printf("tamanho do vetor de B:");
    scanf("%d", &tamB);
    int vet2[tamB];//cria um vetor do tamanho de tamB 


    //armazena vet1
    for (int c = 0; c < tamA; c++)
    {
        printf("NUMERO: ");
        scanf("%d", &vet1[c]);
    }

    //armazena vet2
    for (int c = 0; c < tamB; c++)
    {
        printf("NUMERO: ");
        scanf("%d", &vet2[c]);
    }
    int cont=0;
    //comparação
    for(int c=0;c<tamA;c++){
        for(int i=0;i<tamB;i++){
            if(vet1[c]==vet2[i]){
                printf("%d ",vet1[c]);
                cont++;
                
            }
        }
    }
    printf("%d numeros",cont);
}