// Bibliotecas
# include <stdio.h>

// Constantes
const float pi = 3.14159;

// Interfaces
float soma(float n1, float n2);
float subtracao(float n1, float n2);
float multiplicacao(float n1, float n2);
float divisao(float n1, float n2);
float divisao_inteira(float n1, float n2);
float resto_divisao_inteira(float n1, float n2);
float calcula_area_circulo(float raio);

int main() {
    int op = 0;
    printf("Qual operação deseja executar?\n");
    prntif("(1) Soma\n");
    printf("(2) Subtração\n");
    printf("(3) Multiplicação\n");
    printf("(4) Divisão\n");
    printf("(5) Divisão Inteira\n");
    printf("(6) Resto da Divisão Inteira\n");
    printf("(7) Área do Círculo\n");
    printf("Operação: ");
    scanf("%d", &op);

    if (op == 1) // Soma
    {
    }
    else if (op == 2) // Subtração
    {
    }
    else if (op == 3) // Multiplicação
    {
    }
    else if (op == 4) // Divisão
    {
    }
    else if (op == 5) // Divisão Inteira
    {
    }
    else if (op == 6) // Resto da Divisão Inteira
    {
    }
    else if (op == 7) // Área do Círculo
    {
        printf("\nEntre com o raio do círculo: ");
        float raio;

        scanf("%f", &raio);

        float area = calcula_area_circulo(raio);
        printf("\nÁrea: %.2f\n", area);
    }
    else
    {
        printf("Operação inválida!\n");
    }



}
