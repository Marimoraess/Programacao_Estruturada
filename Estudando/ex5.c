#include <stdio.h>
int main(){
    int n,m;
    double s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int c=n;c<=m;c++){
        s=s+(1.0/c);

    }
    printf("%lf",s);


}