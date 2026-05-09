#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a,b,c,d,e;
    a=n/10000;
    b=(n/1000)%10;
    c=(n/100)%10;
    d=(n/10)%10;
    e=(n%10);
    if(a==e && b==d ){
        printf("SIM");
    }
    else{
        printf("NÃO");
    }
    return 0;
}