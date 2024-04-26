#include <stdio.h>
#include <stdbool.h>


int main() {
    int dado;
    bool continuar = true;

    while(continuar) 
    {
    
        printf("Escolha um atendente: ");
        printf("\n0 - Falar com Natalia");
        printf("\n1 - Falar com Miriã");
        printf("\n2 - Falar com Ana");
        printf("\n3 - Falar com Gabriel");
        printf("\n4 - Falar com Luis");
        printf("\n5 - Falar com Eduardo");
        printf("\n6 - Falar com Gabriele");
        printf("\n7 - Falar com Joana");
        printf("\n8 - Falar com Maria");
        printf("\n9 - Retornar ao menu inicial ");
        printf("\nEscolha um atendente: ");

        scanf("%d", &dado);

        switch(dado)
        {
            case 0:
            printf("Natalia vai lhe atender ...");
            continuar = false;
            break;

            case 1:
            printf("Miriã vai lhe atender ...");
            continuar = false;
            break;

            case 2:
            printf("Ana vai lhe atender ...");
            continuar = false;
            break;

            case 3:
            printf("Gabriel vai lhe atender ...");
            continuar = false;
            break;

            case 4:
            printf("Luis vai lhe atender ...");
            continuar = false;
            break;

            case 5:
            printf("Eduardo vai lhe atender ...");
            continuar = false;
            break;

            case 6:
            printf("Gabriele vai lhe atender ...");
            continuar = false;
            break;

            case 7:
            printf("Joana vai lhe atender ...");
            continuar = false;
            break;

            case 8:
            printf("Maria vai lhe atender ...");
            continuar = false;
            break;
        
            case 9:
            printf("Retornando ao menu inicial ...");
            break;

            default:
            printf("Opção inválida, tente novamente ...");
            continuar = false;
            break;
        }

    }

    return 0;

}



