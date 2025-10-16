#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Digite a quantidade de elementos da sequencia: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
