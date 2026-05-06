#include <stdio.h>

int main() {
    int nota = 0;
    printf("Entre com sua nota de 1 a 5:");
     scanf("%i", &nota);

  //printf("Ganhou uma estrela *\n");
  // printf("Ganhou duas estrelas **\n");
  //printf("Ganhou tres estrelas ***\n");
  //printf("Ganhou quatro estrelas ****");
  //printf("Ganhou cinco estrelas *****\n");
  //printf("Nota invalida! Tente de novo.\n");



switch (nota) {

case 1: printf("Ganhou uma estrela! *\n"); break;
case 2: printf("Ganhou duas estrelas! **\n"); break;
case 3: printf("Ganhou tres estrelas! ***\n"); break;
case 4: printf("Ganhou quatro estrelas! ****"); break;
case 5: printf("Ganhou cinco estrelas! *****\n"); break;
default: printf("Nota invalida! Tente de novo.\n"); 
}
    




    return 0;
}