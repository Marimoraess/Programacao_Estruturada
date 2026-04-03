#include <stdio.h>
int main(){
    int n,num,contpar=0,cont3=0,cont=0,med=0;
    
    scanf("%d",&n);
    for(int c=0;c<n;c++){
        
        printf("Numero:");
        scanf("%d",&num);
        if(num%2==0){
        contpar+=num;
        if(num%3==0){
        cont=+1;
        cont3+=num;
        med= cont3/cont;
    }
    }

    }
   
    
    printf("Somatório %d\n",contpar);
    printf("Media %d\n",med);

    
}