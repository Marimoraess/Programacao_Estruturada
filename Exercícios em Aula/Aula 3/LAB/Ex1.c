#include <stdio.h>
#include <math.h>

int main()
{
    int n,m;
    double s=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            s = (pow(i,2) * j) / pow(3,i)* (j * pow(3,i) * pow(3,i));        }
    }
    printf("%lf",s);

    return 0;
}
