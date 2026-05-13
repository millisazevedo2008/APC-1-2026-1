#include  <stdio.h>

int main() {
    int opcao = 0;

     do {
    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Recarregar\n");
    printf("4 - Ver mensagens\n");
    printf("5 - Ver ligacoes\n");
    printf("Escolha uma opcao > ");
    scanf("%i", &opcao);
    while(getchar() != '\n');

        switch(opcao){
            case 1: printf("Seu saldo eh R$ 10,00\n"); break;
            case 2: printf("Escolha entre 10, 20 e 50\n"); break;
            case 3: printf("Voce nao tem mensagens\n"); break;
            case 4: printf("Ultimas ligacoes\n"); break;
            case 5: printf("Obrigado pelo contato!"); break;
            default: printf("Opcao invalida! Tente de novo.\n");
        }
     } while(opcao != 5);

    return 0; 
}