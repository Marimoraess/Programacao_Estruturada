//Se é palindromo e primo
#include <stdio.h>
int main(){
    int n,rev=0,num,cont=0;
    scanf("%d",&n);
    num=n;
    while (n>0)
    {
        rev=rev*10+( n%10); 
        

        n/=10;
    }
    if(num==rev){
        printf("SIM\n");
    }
    else{
        printf("NAO\n");
    }
    for(int c=1;c<=num;c++){
        if(n%c==0){
            cont+1;
        }
    }
    if(cont>2){
        printf(" NAO É PRIMO\n");
    }
    else
    {
        printf("PRIMO\n");
    }
    

    

}