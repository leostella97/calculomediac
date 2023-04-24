#include <stdio.h>

int main() {
    int soma = 0;
    int contador = 0;
    int valor;

    printf("Digite os valores (pressione enter para finalizar):\n");

    while (scanf("%d", &valor) == 1) {
        soma += valor;
        contador++;
    }

    if (contador > 0) {
        float media = (float) soma / contador;
        printf("A media dos valores inseridos e: %.2f\n", media);
    } else {
        printf("Nenhum valor inserido.\n");
    }

    return 0;
}

