#include <stdio.h>

int main(){

    //variáveis
    int contador_valido = 0;
    int contador_1 = 0, contador_2 = 0, contador_3 = 0, contador_4 = 0, contador_5 = 0;
    int avaliacao;

    do{
    printf("Informe a avaliacao (1 a 5, ou 0 para encerrar): "); scanf("%d", &avaliacao);

    switch(avaliacao){
        case 1: contador_1++; contador_valido++; break;
        case 2: contador_2++; contador_valido++; break;
        case 3: contador_3++; contador_valido++; break;
        case 4: contador_4++; contador_valido++; break;
        case 5: contador_5++; contador_valido++; break;
        case 0: printf("Saindo... \n\n\n"); break;
        default: printf("Avaliacao Invalida!\n"); break;
    }
    }while(avaliacao != 0);

    // resultado avaliações
    printf("Pessimo: %d\n", contador_1);
    printf("Ruim: %d\n", contador_2);
    printf("Regular: %d\n", contador_3);
    printf("Bom: %d\n", contador_4);
    printf("Excelente: %d\n", contador_5);
    printf("Respostas Validas: %d\n", contador_valido);


}
