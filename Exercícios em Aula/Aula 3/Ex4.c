#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n>0){
        int dig;
        dig=n%10;
        n=n/10;
        printf("%d",dig);
    }
}