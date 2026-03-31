#include <stdio.h>

int main(){
    int n;
    printf("Digite o n: ");
    scanf("%d",&n);

    int num[n];

    printf("Sequencia: \n");
    for(int c = 0; c < n; c++){
        scanf("%d",&num[c]);
        printf("sequencia = %d\n", num[c]);
    }
}