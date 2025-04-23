#include <stdio.h>

int main() {
    int n;
    printf("Digite um número para iniciar a contagem regressiva:\n");
    scanf("%d", &n); 

    R1:
        if (n == 0) goto R4;
        else goto R2;

    R2:
        printf("%d\n", n);
        n = n - 1;
        goto R1;

    R4:
        printf("%d\n", n); 
        return 0;
}

