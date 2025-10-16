#include <stdio.h>

int main() {
    int m[3][3], inv[3][3];

    printf("Digite os valores da matriz 3x3:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            inv[i][j] = m[2-i][2-j];

    printf("Matriz invertida:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%d ", inv[i][j]);
        printf("\n");
    }
    return 0;
}
