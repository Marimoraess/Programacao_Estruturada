#include <stdio.h>
int main(){
    int n,prox;
    scanf("%d",&n);
    int a=0;
    int b=1;
    while(n<=0){
        scanf("%d",&n);
    }
    while(a<=n){
        printf("%d ",a);
        prox=a+b;
        a=b;
        b=prox;
        
        


    }

}