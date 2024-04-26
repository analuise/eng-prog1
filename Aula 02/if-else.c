#include <stdio.h>

int main() {
    int numero;

    printf("Escolha um número: ");
    scanf("%d", &numero);

    if(numero%2 == 0){
        printf("\n%d é múltiplo de 2", numero);
    }

    if(numero%3 == 0){
        printf("\n%d é múltiplo de 3", numero);
    }

    if(numero%5 == 0){
        printf("\n%d é múltiplo de 5", numero);
    }

    if(numero < 10){
        printf("\n%d é menor que 10", numero);
    }
    else {
        printf("\n%d é maior ou igual a 10", numero);
    }

    printf("\n");

    return 0;
}