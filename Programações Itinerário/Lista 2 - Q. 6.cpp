#include <stdio.h>

int main() {
    int m[3][3], dp = 0, ds = 0;

    printf("Digite os valores da matriz 3x3:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    for(int i = 0; i < 3; i++) {
        dp += m[i][i];
        ds += m[i][2-i];
    }

    printf("Soma da diagonal principal = %d\n", dp);
    printf("Soma da diagonal secundaria = %d\n", ds);
    return 0;
}
