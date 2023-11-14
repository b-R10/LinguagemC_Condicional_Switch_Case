#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float a,b;
    printf("Digite dois valores: ");
    scanf("%f %f", &a, &b);
    printf("escolha a operação (+ - / *):");
    fflush(stdin);                                                      // Limpeza do buffer de memória
    scanf("%c", &op);
    switch(op)                                                          // Desvio - Switch Case
    {                                                                       // funciona, apenas, com caracteres e inteiros.
        case '+':
            printf("soma = %f", (a + b));
            break;
        case '-':
            printf("subtração = %f", (a - b));
            break;
        case '/':
            printf("divisão = %f", (a / b));
            break;
        case '*':
            printf("multiplicação = %f", (a * b));
            break;
        default:                                                        // caso não definido/outro caso
            printf("erro.");
            break;
    }
}