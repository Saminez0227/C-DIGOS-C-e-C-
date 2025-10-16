#include <stdio.h>

int contarOcorrencias(int m[4][4], int x) {
    int cont = 0;
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            if(m[i][j] == x) cont++;
    return cont;
}

int main() {
    int m[4][4], num;

    printf("Digite os valores da matriz 4x4:\n");
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    printf("Digite o numero a ser contado: ");
    scanf("%d", &num);

    printf("O numero %d aparece %d vezes.\n", num, contarOcorrencias(m, num));
    return 0;
}
