#include <stdio.h>

int main() {
    int v1[5], v2[5], v3[10];

    printf("Digite os 5 elementos do vetor 1:\n");
    for(int i = 0; i < 5; i++) scanf("%d", &v1[i]);

    printf("Digite os 5 elementos do vetor 2:\n");
    for(int i = 0; i < 5; i++) scanf("%d", &v2[i]);

    for(int i = 0, j = 0; i < 5; i++) {
        v3[j++] = v1[i];
        v3[j++] = v2[i];
    }

    printf("Vetor intercalado:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
