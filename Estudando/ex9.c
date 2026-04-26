//
#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int divisores = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}