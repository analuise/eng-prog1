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
