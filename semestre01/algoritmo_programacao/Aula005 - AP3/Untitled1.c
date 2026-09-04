#include <stdio.h>

int main(){

    //variáveis
    int termos;
    int a = 0, b = 1;
    int resultado;
    int contador = 0;

    //usando do while para não deixar o usuário entrar o valor 0
    do{
    printf("Quantos termos deseja exibir?\n"); scanf("%d", &termos);
    while(contador < termos){
        printf("%d ", a);
        // cálculo para que a sequencia fique correta
        resultado = a + b;
        a = b;
        b = resultado;
        contador++;

    }
    }while(termos == 0);

    return 0;

}


