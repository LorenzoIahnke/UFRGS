#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, sinal;
    int atual, anterior;
    int contaBloco = 0;
    int tamanhoAtual = 0;
    int maiorBloco = 0;


    printf("Qual a sequência que você quer fazer?: "); scanf("%d", &n);
    if(n < 1 || n > 100){
        printf("Quantidade inválida!");
        return 1;
    }
    for(int i = 0; i < n; i++){
        printf(": "); scanf("%d", &atual);

        if(atual > 1){
            printf("Inválido, apenas 1 e 0");
            return 1;
        }
        if(i == 0){
            contaBloco = 1;
            tamanhoAtual = 1;
        }
        else if(atual == anterior){
            tamanhoAtual++;
        }
        else{
            contaBloco++;
            tamanhoAtual = 1;
        }

        if(tamanhoAtual > maiorBloco){
            maiorBloco = tamanhoAtual;

        }
        anterior = atual;
    }

    printf("Blocos: %d\n", contaBloco);
    printf("Maior Bloco: %d", maiorBloco);

    return 0;
}
