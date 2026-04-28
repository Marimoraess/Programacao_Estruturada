// maior elemento
#include <stdio.h>

int main()
{
    int n;
    
    
    scanf("%d",&n);
    int vet[n];
    for(int c=0;c<n;c++){
        scanf("%d",&vet[c]);
    }
    for(int c=0;c<n;c++){
        int rep=0;
        for(int i=0;i<c;i++){
            if(vet[c]==vet[i]){
               rep=1;
               break;
            }
        } 
        if(rep==0){
        printf("%d ",vet[c]);
    }
    
    }
    



}