#include <stdio.h>
#include <stdlib.h>

int main () {
    int opcao = 0;
   
    while (opcao != 5){
        system("clear");
        printf("Menu principal\n");
        printf ("1 - Consultar saldo\n");
        printf ("2 - Fazer recarrega\n");
        printf ("3 - Ver recados\n");
        printf ("4 - Ultimas ligacoes\n");
        printf ("5 - Sair\n");
        
        printf("Entre com uma opcao => ");
        scanf ("%i", &opcao);
        while(getchar() != '\n');

        switch (opcao){
            case 1: { 
                printf("Seu saldo eh de R$ 10.00\n\n"); break;
                system("clear");
                printf("CONSULTA SALDO\n\n");
                printf("Seu saldo eh de R$ 10.00.\n\n"); break;
            }
            case 2: printf("Escolha um valor de recarga:\n"); break;
            case 3: printf("Voce naum tem recado.\n"); break;
            case 4: printf("99999-00000\n99999-11111;\n"); break;
            case 5: printf("Ate logo!\n"); break;
            default: printf("Opcao invalida. tente de novo!\n"); 
        } 
        if (opcao != 5) {
            opcao = 0;
            printf("Pressione ENTER para continuar...");
            getchar();
        }
    }

    return 0;
}