#include <stdio.h>

int main()
{
    int n,soma=0;
    scanf("%d",&n);
    for(int c=1; c<n;c++){
        if(n%c==0){
            soma+=c;
        }
        
    }
    if(soma==n){
        printf("Numero perfeito");
    }
    else{
        printf("nao");
    }

    return 0;
}
