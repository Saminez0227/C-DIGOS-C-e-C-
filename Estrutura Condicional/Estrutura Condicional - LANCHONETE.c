#include <stdio.h>

int main() {
    int codigo, qtd;
    float preco;

    printf("Digite o codigo do produto (1 a 5): ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &qtd);

    switch (codigo) {
        case 1: preco = 5.00; break;
        case 2: preco = 3.50; break;
        case 3: preco = 4.80; break;
        case 4: preco = 8.90; break;
        case 5: preco = 7.32; break;
        default:
            printf("Codigo invalido!\n");
            return 0;
    }

    printf("Total a pagar: R$ %.2f\n", preco * qtd);
    return 0;
}
