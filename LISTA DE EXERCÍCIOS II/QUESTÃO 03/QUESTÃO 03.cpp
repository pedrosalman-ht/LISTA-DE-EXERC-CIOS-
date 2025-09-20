#include <stdio.h>

int main() {
    int soma = 0;
    int valor;

    while (soma < 20) {
        printf("Digite o valor do dado (numeros validos:1  2  3  4  5  6): ");
        scanf("%d", &valor);

        if (valor < 1 || valor > 6) {
            printf("Invalido! e permitido digitar: 1  2  3  4  5  6.");
            continue; 
        }

        soma += valor; 
    }

    printf("Soma final: %d\n", soma);

    return 0;
}
