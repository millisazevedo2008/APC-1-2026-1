#include <stdio.h>

int main(){
int numero = 0;
    printf("Entre com  um numero de 1 a 10");
    scanf("%i", &numero);
    printf("A tabuada de %i:\n");
    printf("%i X %i = %i\n", 1, numero, 1, numero * numero);
    printf("%i X %i = %i\n", 2, numero, 2, numero * numero);
    printf("%i X %i = %i\n", 3, numero, 3, numero * numero);
    printf("%i X %i = %i\n", 4, numero, 4, numero * numero);
    printf("%i X %i = %i\n", 5, numero, 5, numero * numero);
    printf("%i X %i = %i\n", 6, numero, 6, numero * numero);
    printf("%i X %i = %i\n", 7, numero, 7, numero * numero);
    printf("%i X %i = %i\n", 8, numero, 8, numero * numero);
    printf("%i X %i = %i\n", 9, numero, 9, numero * numero);
    printf("%i X %i = %i\n", 10, numero, 10, numero * numero);

    // repete de 1 ate 10
    for(int i=1; i<=10; i++) {
        printf("%i X %i = %i\n", i, numero, i * numero);
    }
// CUIDADO!!!!
    for(int i=1; i>0; i++) {
        printf("Ao infinito e alem\n");
    }

    return 0;
}