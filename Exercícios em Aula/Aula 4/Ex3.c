#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int v1[n],v2[n],soma[n+1];

    for (int c=0;c<n;c++){
        int num;
        printf("V1: ");
        scanf("%d",&v1[c]);
    }
    int val=0;
    int k=n;
    for(int c=0;c<n;c++){
        printf("V2:");
        scanf("%d",&v2[c]);
    }
    for (int c=n-1;c>=0; c--){
        int s=v1[c]+v2[c]+val;
        soma[k]=s%10;
        val=s/10;
        k--;
    }
    soma[0]= val;
    printf("Soma:\n");
    if (soma[0]!=0){
        for(int c=0;c<=n;c++){
            printf("%d ",soma[c]);
        }
    
    }
    else{
        for(int c=1;c<=n;c++){
            printf("%d ",soma[c]);
        }
    }
}