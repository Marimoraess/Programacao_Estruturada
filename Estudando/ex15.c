// mostrar frequencia
#include <stdio.h>

int main()
{
    int n ;
    scanf("%d", &n);
    int vet[n];

    for (int c = 0; c < n; c++)
    {
        scanf("%d", &vet[c]);
    }

    for (int j = 0; j < n; j++)
    {
        int cont = 0;

        for (int i = 0; i < n; i++)
        {

            if (vet[j] == vet[i])
            {
                cont++;
            }
            int repetiu=0;
            for(int j=0;j<i;j++){
                if(vet[i]==vet[j]){
                    repetiu=1;
                }
            }
            if(repetiu==0){
                
            }
        }
         printf("O num %d aparece %d veezes\n",vet[j],cont);
       
    }
    
}