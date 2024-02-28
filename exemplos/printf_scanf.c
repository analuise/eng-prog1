// Bibliotecas "padrão"
#include <stdio.h>
#include <stdlib.h>

// padrão C ANSI
// int main (void) ;
// int main (int argc, char **argv) ;
// int main (int argc, char *argv[] );

// sistemas UNIX-like (Linux, FreeBSD, Solaris, ...) e Windows
// int main (int argc, char **argv, char **envp) {

int main (void) {
    int i;
    printf("Entre com um valor do tipo int na base 10: ");
    scanf("%i", &i);

    printf("Você digitou: %i\n", i);

    // indicação de execução sem retorno de erros.
    return 0;
}


