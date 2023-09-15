
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Calculation( float vG, float vE);

void main() {
    setlocale(LC_ALL, "Portuguese");
    float pG, pE;

    printf("##### Cálculo de Combustível #####\n");

    printf("Qual é o preço atual da Gasolina? ");
    fflush(stdin);
    scanf("%f", &pG);

    printf("Qual é o preço atual do Etanol? ");
    fflush(stdin);
    scanf("%f", &pE);

    int result = Calculation(pG, pE);


    if(result == 0) {
        printf("\n Compensa abastecer com Gasolina\n");

    } else if (result == 1) {
        printf("\n Compensa mais abastecer com Etanol\n");

    } else {
        printf("\n São equivalente, tanto faz!\n");
    }

}

int Calculation( float vG, float vE) {

    if ((vG * 0.70) < vE) {
        return 0;

    } else if ((vG * 0.70) > vE) {
        return 1;

    } else {
        return 2;
    }

}
