#include <stdio.h> 

int main () {
/* ==============================
      N O T A    L E G A L
==============================
Produto         Qtd Valor Unit
Camiseta        002      39.99
Calca           001      89.90
Meia Social     003      19.99
==============================
Total                   229.85
*/

printf("==============================\n");
printf("      N O T A    L E G A L    \n");
printf("==============================\n");
printf("Produto      Qtd    Valor Unit\n");

int qtd_camiseta = 002;
int qtd_calca = 001;
int qtd_meia = 003;


float valor_camiseta = 39.99f;
float valor_calca = 89.99f;
float valor_meia = 19.99f;
float valor_total = 229.85f;



printf(" Camiseta     %i  %.2f\n", qtd_camiseta,   valor_camiseta);
printf(" Calca        %i  %.2f\n", qtd_calca,  valor_calca);
printf(" Meia Social  %i  %.2f\n", qtd_meia,  valor_meia);
printf("==================================\n");
printf("Total         %.2f\n", valor_total);
    return 0;
}