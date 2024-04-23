// ---------------------------------------------------------------

// Duas barras são utilizadas para comentários em linha.
// Ou seja, o que está depois das barras está comentado.

/* Assim se faz comentários em blocos.
Comentários em blocos podem seguir por várias linhas.
Utilize a barra asterisco, terminada por asterisco barra, caso
queira fazer comentários neste estilo.
*/

/* Se você quiser também pde utilizar este estilo para
 * os comentários multi-linhas.
 * Não é necessário se utilizar o asterisco linha a linha,
 * mas você vai ver comentários assim em códigos de terceiros.
 */

// ---------------------------------------------------------------

/* Clique em "Terminal > Run Build Task" para compilar;
 * Utilize o "Terminal" abaixo para rodar a tarefa compilada.
 */

/* Bibliotecas
 * -----------
 * C lida com os arquivos de maneira sequencial, de cima para
 * baixo, ou seja, você precisa "carregar" as bibliotecas antes
 * das suas funções para utilizá-las.
 *
 * Os arquivos .h são chamados "headers", ou cabeçalhos, e os mesmos
 * possuem a assinatura das funções implementadas por uma biblioteca.
 *
 * É necessário que se importe estes cabeçalhos para utilizá-los.
 * O compilador sabe onde encontrar o código implementado pelo header
 * importado, não se preocupe.
 */
#include <stdio.h>   // Biblioteca padrão de funções de entrada e saída
#include <stdbool.h> // Biblioteca que nos permite utilizar tipos booleanos (true e false)
#include <string.h>  // Biblioteca com funções de manipulação de strings

/* Constantes
 * ----------
 * Constantes são definições parecidas com as variáveis, vistas
 * até aqui, porém constantes são literalmente o que o nome significa,
 * definições que não podem ser modificadas no decorrer do programa.
 */
const float pi = 3.1415; // Constante pi.

/* Interfaces
 * ----------
 * Assinatura de métodos implementados no corpo do programa, ou interfaces,
 * são como as definições nos arquivos .h, porém aqui definimos no início de
 * nosso programa.
 *
 * Como não vamos utilizar, por hora, o que implementamos aqui em outros
 * programas então não precisamos utilizar arquivos separados.
 *
 * Note que precisamos definir as interfaces dos métodos no início do programa
 * para que possam ser utilizadas em qualquer parte do mesmo.
 *
 * Da mesma maneira como o compilador sabe onde encontrar as implementações
 * definidas nos arquivos .h, o compilador também sabe onde encontrar as
 * implementações das interfaces definidas no início do programa no ponto
 * correto onde as mesmas foram implementadas.
 */
int soma(int num1, int num2);      // Note que aqui não temos uma variável, int é o retorno da função.
                                   // Esta função retorna um valor inteiro!
                                   // num1 e num2 são parâmetros da função, e os mesmos devem ser número inteiros.
int subtracao(int num1, int num2); // Note que não podemos utilizar caracteres epseciais nem acentos.
int multiplicacao(int num1, int num2);
float divisao(int num1, int num2);       // Mesmo definindo que nossa divisão irá trabalhar com parâmetros como números
                                         // inteiros, precisamos retornar uma resposta em "número flutuante", que é basicamente
                                         // "números com ponto".
int divisao_inteira(int num1, int num2); // Aqui adicionamos o desafio de retornar a divisão com retorno inteiro, descartando o resto.
int resto_divisao(int num1, int num2);   // E, adicionalmente, uma vez que temos "divisao inteira" precisamos também de
                                         // resto da divisão inteira.
float area_circulo(float raio);
float perimetro_circulo(float raio);

/* A função "main" é a padrão a ser chamada de programas em C.
 *
 * Não é necessário que a mesma exista, você pode estar implementando uma biblioteca.
 *
 * A ideia de bibliotecas é serem utilizadas em outros programas, então você teria
 * apenas funções definidas.
 *
 * A função main considera chamada de um terminal padrão no sistema operacional.
 * Seu tipo de retorno é int, e deve retornar "0" para indicar ao sistema operacional
 * que tudo ocorreu sem problemas.
 * É possível se utilizar a mesma no formato "voi main()", sem retorno e sem parâmetros.
 *
 * Os argumentos argc e argv são padrões POSIX, e, em geral, consideramos que nosso programa
 * pode receber parâmetros. O parâmetro argc diz o número de parâmetros de entrada, enquanto o
 * ponteiro para um array argv aponta para os parâmetros de entrada.
 *
 * O asterisco indica ponteiro, mas por hora não se preocupe.
 *
 * Ao executarmos o programa "./calculadora", sem nenhum parâmetro temos argc=1 e argv[0]=calculadora.
 * Note que o nome do programa é contado e é também um parâmetro.
 *
 * Executar "./calculadora soma 1 2" teria argc=4 e argv={"calculadora", "soma", "1", "2"}. Ou seja, poderia
 * ser útil se utilizar o programa desta maneira, mas por hora vamos ignorar.
 */
int main(int argc, char *argv[])
{
    char comando[20]; // Por hora não se preocupe, vamos armazenar o comando em uma
                      // sequência de caracteres que não sabemos o tamanho e definimos como
                      // um máximo de 20.

    printf("Qual o peração você deseja executar?");
    printf("\n (1) soma"); // O caracter '\n' significa nova linha.
    printf("\n (2) subtração");
    printf("\n (3) multiplicação");
    printf("\n (4) divisão");
    printf("\n (5) divisão inteira");
    printf("\n (6) resto de divisão inteira");
    printf("\n (7) área de um círculo");
    printf("\n (8) perímetro de um círculo");
    printf("\nFunção: ");
    scanf("%s", &comando); // Função de leitura de entrada de dados "scanf"
                           // Definimos que a entrada é um string "%s", que é equivalente a uma
                           // sequência de caracteres, como nosso "char comando[20]".
                           // &comando significa que enviamos o endereço da variável comando.
                           // Não se preocupe com isso por hora.


    if (strcmp(comando, "1") == 0) // Função de comparação de strings
    {
        // Soma

        // Defina as variáveis que irá precisar
        int num1, num2;
        printf("Parâmetro 1: ");
        // Função scanf lê um tipo (%s string, %d decimal, %f float, ...) e armazena numa variável (use & sempre no nome)
        scanf("%d", &num1); // %d significa decimal, tipo int, sendo armazenado no endereço de num1
        printf("Parâmetro 2: ");
        scanf("%d", &num2);
        int resposta = soma(num1, num2);
        // No printf você precisa inserir represetação das variáveis com %
        // Depois da parte a ser escrita "texto", você utiliza vírgulas e define as variáveis a serem lidas,
        // na mesma ordem em que elas foram inseridas.
        printf("soma(%d,%d) = %d\n", num1, num2, resposta);
    }
    else if (strcmp(comando, "2") == 0)
    {
        // Subtração
    }
    else if (strcmp(comando, "3") == 0)
    {
        // Multiplicação
    }
    else if (strcmp(comando, "4") == 0)
    {
        // Divisão
    }
    else if (strcmp(comando, "5") == 0)
    {
        // Divisão inteira
    }
    else if (strcmp(comando, "6") == 0)
    {
        // Resto de divisão inteira
    }
    else if (strcmp(comando, "7") == 0)
    {
        // Área de um círculo
        float raio;
        printf("Raio: ");
        scanf("%f", &raio); // Note que precisamos definir %f porque raio é float!
        float resposta = area_circulo(raio);
        printf("area_circulo(%f) = %f\n", raio, resposta);
    }
    else if (strcmp(comando, "8") == 0)
    {
        // Perímetro de um círculo
    }
    else // Último else caso não entre em nenhum caso.
    {
        printf("Função não implementada!\n");
    }

    return 0; // Zero é o retorno padrão e significa que tudo ocorreu como o esperado.
}

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

    return resposta;
}

// Implemente a função de multiplicação
int multiplicacao(int num1, int num2)
{
    int resposta = 0;

    return resposta;
}

// Implemente a função de divisão
float divisao(int num1, int num2)
{
    float resposta = 0;

    return resposta;
}

// Implemente a função de divisão inteira (é bem óbvio)
int divisao_inteira(int num1, int num2)
{
    int resposta = 0;

    return resposta;
}

// Implemente a função de resto de divisão inteira
int resto_divisao(int num1, int num2)
{
    int resposta = 0;

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

    return resposta;
}