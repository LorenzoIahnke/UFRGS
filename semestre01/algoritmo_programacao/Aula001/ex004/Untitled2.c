#include <stdio.h>

int main(){
    int escolha;
    int escolha2;

    printf("Voce esta feliz?\n1 - Sim\n2 - Nao\n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            printf("Tem certeza?\n1 - Sim\n2 - Nao\n");
            scanf("%d", &escolha2);

            switch (escolha2){
            case 1:
                printf("Voce esta mentindo!\n");
                break;
            case 2:
                printf("Eu sabia!\n");
                break;
                return 0;

            }
            break;
        case 2:
            printf("Que peninha...\n");
            break;
            return 0;

    }

}
