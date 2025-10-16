#include <stdio.h>

int main() {
    float t1, t2, t3, maior;

    printf("Digite as tres distancias dos lancamentos: ");
    scanf("%f %f %f", &t1, &t2, &t3);

    maior = t1;
    if (t2 > maior) maior = t2;
    if (t3 > maior) maior = t3;

    printf("Maior distancia = %.2f\n", maior);
    return 0;
}
