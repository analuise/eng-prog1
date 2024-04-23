#include "calculadora.h" // Importamos o header que definimos com as interfaces das funções.

/* Constantes
 * ----------
 * Constantes são definições parecidas com as variáveis, vistas
 * até aqui, porém constantes são literalmente o que o nome significa,
 * definições que não podem ser modificadas no decorrer do programa.
 */
const float pi = 3.1415; // Constante pi.

// Os parâmetros de uma função são definidos entre parênteses!
// O corpo de uma função inicia e termina com a utilização de chaves!
// Toda função que possui um tipo de retorno diferente de "void", ou vazio, precisa ter um "return".
int soma(int num1, int num2)
{
    int resposta = 0;       // variável resposta, do tipo int, inicializada com o valor zero.
    resposta = num1 + num2; // variável resposta modificada para o valor da soma dos parâmetros.

    return resposta; // Esta função poderia ser simplificada para "return (num1+num2);"
}

// Implemente a função de subtração
int subtracao(int num1, int num2)
{
    int resposta = 0;
    resposta = num1 - num2;

    return resposta;
}

// Implemente a função de multiplicação
int multiplicacao(int num1, int num2)
{
    int resposta = 0;
    resposta = num1 * num2;

    return resposta;
}

// Implemente a função de divisão
float divisao(int num1, int num2)
{
    float resposta = 0;
    resposta = num1 / num2;

    return resposta;
}

// Implemente a função de divisão inteira (é bem óbvio)
int divisao_inteira(int num1, int num2)
{
    int resposta = 0;
    resposta = num1 / num2;

    return resposta;
}

// Implemente a função de resto de divisão inteira
int resto_divisao(int num1, int num2)
{
    int resposta = 0;
    resposta = num1 % num2;

    return resposta;
}

float area_circulo(float raio)
{
    float resposta = pi * raio * raio; // Note que aqui estamos utilizando a constante "pi", definida no
                                    // início de nosso arquivo, multiplicada pela variável de entrada
                                    // "raio".
printf("%f\n", resposta);
    return resposta;
}

// Implemente a função de cálculo de perímetro de círculo
float perimetro_circulo(float raio)
{
    float resposta = 0;
    resposta = 2 * pi * raio;

    return resposta;
}