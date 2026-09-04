#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float temperaturaC, temperaturaF;
    int numero, quadrado;

    do{
        printf("1. Ler uma temperatura em Celsius e mostrar em Fahreinheit\n");
        printf("2. Ler um número inteiro e mostrar seu quadrado\n");
        printf("0. Encerrar\n");
        printf(": "); scanf("%d", &opcao);


        if(opcao == 1){
            printf("Temperatura em C: "); scanf("%f", &temperaturaC);
            temperaturaF = (temperaturaC * (9.0/5.0)) + 32;
            printf("Temperatura em F: %.2f\n\n", temperaturaF);
        }

        if(opcao == 2){
            printf("Digite o número que você quer deixar ao quadrado: "); scanf("%d", &numero);
            quadrado = numero * numero;
            printf("Quadrado: %d\n\n", quadrado);
        }

        if(opcao == 0){
            printf("Programa encerrado!");
            break;

        }

        if(opcao > 2){
            printf("Opção Inválida!\n");
        }


    }while(opcao != 0);

    return 0;

}
