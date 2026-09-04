#include <stdio.h>
#include <locale.h>

int main(){
    int valor;
    int quantidade = 0;
    int soma = 0;
    int maior = 0;


    while(valor != -1){
        printf("Digite um valor: "); scanf("%d", &valor);

        if(valor != -1){
            quantidade++;
            if(valor > maior){
                maior = valor;
            }
            soma += valor;
        }
    }

    if(quantidade == 0){
        printf("Nenhuma leitura");

    }else{
        printf("Quantidade: %d\n", quantidade);
        printf("Soma: %d\n", soma);
        printf("Maior: %d", maior);
    }
    return 0;
}





