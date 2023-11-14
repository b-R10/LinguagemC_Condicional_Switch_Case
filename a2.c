// Faça uma solução para permitir que o usuário informe dois valores numéricos e escolha uma das operações aritméticas para o cálculo.
// Mostrar os números informados, operação realizada e o resultado da operação.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    float a, b;
    char op;
    printf("digite dois valores numéricos: ");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("escolha uma operação aritmética: ");
    fflush(stdin);
    scanf("%c", &op);
    switch(op)
    {
        case '+':
            printf("%f\n%f\n%f\n%f", a, b, op, (a + b) );
            break;
        case '-':
            printf("%f\n%f\n%f\n%f", a, b, op, (a - b) );
            break;
        case '/':
            printf("%f\n%f\n%f\n%f", a, b, op, (a / b) );
            break;
        case '*':
            printf("%f\n%f\n%f\n%f", a, b, op, (a * b) );
            break;
    }
}