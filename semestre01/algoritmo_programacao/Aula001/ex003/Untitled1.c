#include <stdio.h>

int main(){
    float val1, val2, resultado;
    char operacao;

    printf("----- CALCULADORA MASSA -----\n");

    printf("Digite o primeiro Valor: \n");
    scanf("%f", &val1);
    printf("Digite o segundo valor: \n");
    scanf("%f", &val2);
    printf("Selecione a operacao: \nA - Soma\nB - Subtracao\nC - Multiplicacao\nD - Divisao\n\n");
    scanf(" %c", &operacao);

    switch(operacao){
        case 'A':
        case 'a':
            resultado = val1 + val2;
            break;
        case 'B':
        case 'b':
            resultado = val1 - val2;
            break;
        case 'C':
        case 'c':
            resultado = val1 * val2;
            break;
        case 'D':
        case 'd':
            resultado = val1 / val2;
            break;
    }

    printf("O resultado da sua operacao e: %.2f\n", resultado);
    return 0;
}
