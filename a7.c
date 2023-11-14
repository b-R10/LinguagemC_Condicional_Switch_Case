#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char figura[30];
    int op;
    float resultado, raio, lado, base, altura;
    printf("Qual figura você deseja calcular a área?\n"
            "\tCírculo, Quadrado, Retângulo ou Triângulo.\n");
    scanf("%s", figura);
    fflush(stdin);

    // Conversão em minúsculas
    for (int i = 0; figura[i]; i++) {
        figura[i] = tolower(figura[i]);
    }

    if ((strcmp(figura, "circulo") == 0))
    {
        printf("Digite a medida do raio do círculo: ");
        scanf("%f", &raio);
        op = 1;
    }
    else if (strcmp(figura, "quadrado") == 0)
    {
        printf("Digite a medida do lado: ");
        scanf("%f", &lado);
        op = 2;
    }
    else if (strcmp(figura, "retangulo") == 0)
    {
        printf("Digite a base do retângulo: ");
        scanf("%f", &base);
        printf("Digite a altura do retângulo: ");
        scanf("%f", &altura);
        op = 3;
    }
    else if (strcmp(figura, "triangulo") == 0)
    {
        printf("Digite a base do triângulo: ");
        scanf("%f", &base);
        printf("Digite a altura do triângulo: ");
        scanf("%f", &altura);
    }
    switch (op)
    {
        case 1:
            resultado = (3.14 * raio * raio);
            printf("%f", resultado);
            break;
        case 2:
            resultado = (lado * lado);
            printf("%f", resultado);
            break;
        case 3:
            resultado = (base * altura);
            printf("%f", resultado);
            break;
        case 4:
            resultado = ((base * altura) / 2);
            printf("%f", resultado);
            break;
        default:
            printf("Erro.");
            break;
    }
}