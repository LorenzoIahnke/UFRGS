#include <stdio.h>

int main(){
    // Variáveis
    int val1, val2, soma;

    // Título Programa
    printf("=====================\n");
    printf("     CALCULADORA     \n");
    printf("=====================\n");
    printf("\n");

    // Requisição de Entradas
    printf("Digite um valor inteiro: \n");
    scanf("%d", &val1);
    printf("Digite outro valor inteiro: \n");
    scanf("%d", &val2);

    // Cálculo da Soma
    soma = val1 + val2;

    // Resultado da Soma
    printf("Muito bem! A sua soma deu: %d", soma);

    return 0;
}
