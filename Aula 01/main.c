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
#include "calculadora.h"// Importamos o header que definimos com as interfaces das funções.


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

    printf("Qual operação você deseja executar?");
    printf("\n (1) soma"); // O caracter '\n' significa nova linha.
    printf("\n (2) subtração");
    printf("\n (3) multiplicação");
    printf("\n (4) divisão");
    printf("\n (5) divisão inteira");
    printf("\n (6) resto de divisão inteira");
    printf("\n (7) área de um círculo");
    printf("\n (8) perímetro de um círculo");
    printf("\n (0) sair");
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
        int num1, num2;
        printf("Parâmetro 1: ");
        scanf("%d", &num1);
        printf("Parâmetro 2: ");
        scanf("%d", &num2);
        int resposta = subtracao(num1, num2);
        printf("subtracao(%d,%d) = %d\n", num1, num2, resposta);
    }
    else if (strcmp(comando, "3") == 0)
    {
        // Multiplicação
        int num1, num2;
        printf("Parâmetro : ");
        scanf("%d", &num1);
        printf("Parâmetro 2: ");
        scanf("%d", &num2);
        int resposta = multiplicacao(num1, num2);
        printf("multiplicacao(%d,%d) = %d\n", num1, num2, resposta);
    }
    else if (strcmp(comando, "4") == 0)
    {
        // Divisão
        int num1, num2;
        printf("Parâmetro 1: ");
        scanf("%d", &num1);
        printf("Parâmetro 2: ");
        scanf("%d", &num2);
        int resposta = divisao(num1, num2);
        printf("divisao(%d,%d) = %d\n", num1, num2, resposta);
    }
    else if (strcmp(comando, "5") == 0)
    {
        // Divisão inteira
        int num1, num2;
        printf("Parâmetro 1: ");
        scanf("%d", &num1);
        printf("Parâmetro 2: ");
        scanf("%d", &num2);
        int resposta = divisao_inteira(num1, num2);
        printf("divisao_inteira(%d,%d) = %d\n", num1, num2, resposta);
    }
    else if (strcmp(comando, "6") == 0)
    {
        // Resto de divisão inteira
        int num1, num2;
        printf("Parâmetro 1: ");
        scanf("%d", &num1);
        printf("Parâmetro 2: ");
        scanf("%d", &num2);
        int resposta = resto_divisao(num1, num2);
        printf("resto_divisao(%d,%d) = %d\n", num1, num2, resposta);
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
        float raio;
        printf("Raio: ");
        scanf("%f", &raio); // Note que precisamos definir %f porque raio é float!
        float resposta = perimetro_circulo(raio);
        printf("perimetro_circulo(%f) = %f\n", raio, resposta);
    }
    else // Último else caso não entre em nenhum caso.
    {
        printf("Função não implementada!\n");
    }

    return 0; // Zero é o retorno padrão e significa que tudo ocorreu como o esperado.
}
