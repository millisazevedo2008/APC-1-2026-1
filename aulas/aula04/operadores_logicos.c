#include <stdio.h>

int main() {
    int idade;

    printf("Entre com a sua idade:  ");
    scanf("%i", &idade);
    while(getchar() != '\n');
     // && => 0 falso E qualquer coisa = sempre falso
    printf("Voce eh uma crianca? %i", idade >= 0 && idade <= 12);
    
    // || => 1 verdadeiro OU qualquer coisa = Sempre verdadeiro
    printf("Voce tem prioridade para vacinar? %i\n", idade <= 9 || idade >= 60);

    // ! => NAO verdadeiro = Falso, NAO falso = verdadeiro

    return 0;
}