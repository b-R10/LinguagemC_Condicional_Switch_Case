/* Faça uma solução que permita ao usuário fornecer dois números inteiros e escolher dentre
    as opções: calcular a média, calcular a soma, calcular o módulo de números, ou mostrar
    o maior e o menor.
    Mostrar os número informados,
    a operação realizada e o resultado da operação.*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "portuguese");
    int a, b, x;
    float y;
    printf("Forneça dois números: \n");
    scanf("%i %i", &a, &b);
    printf("digite o número de uma das opções:\n"
           "1 - calcular a média\n"
           "2 - calcular a soma\n"
           "3 - calcular o módulo dos números\n"
           "4 - mostrar maior e menor\n");
    fflush(stdin);
    scanf("%i", &x);
    switch(x) {
        case 1:
            y = ((a + b)/2);
            printf("%i\n", a);
            printf("%i\n", b);
            printf("%f\n", y);
            break;
        case 2:
            y = (a + b);
            printf("%i\n", a);
            printf("%i\n", b);
            printf("%f\n", y);
            break;
        case 3:
            y = (a%b);
            printf("%i\n", a);
            printf("%i\n", b);
            printf("%f\n", y);
            break;
        case 4:
            printf("%i\n", a);
            printf("%i\n", b);
            if (b < a) {
                printf("maior: %i, menor: %i", a, b);
            } else {
                printf("maior: %i, menor: %i", b, a);
            }
    }
    return 0;
}