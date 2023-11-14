#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main() {
    int sit_civil, idade, filhos, maisvelho;
    char sexo, conjuge[50], cidade[50];
    float salario;
    printf("Informe sua situação civíl: \n""\t1 - Solteiro\n""\t2 - Casado\n""\t3 - Divorciado\n""\t4 - Viúvo\n");
    scanf ("%i", &sit_civil);
    switch (sit_civil){
        case 1:         // solteiro
            printf("informe sua idade");
            scanf(" %i", &idade);
            break;
        case 2:         // casado
            printf("Informe seu sexo (M/F):");
            scanf(" %c", &sexo);
            printf("Informe o nome do seu cônjuge:");
            scanf (" %s", conjuge);
            break;
        case 3:         // divorciado
            printf("Quantos filhos você tem?");
            scanf (" %i", &filhos);
            if (filhos > 1) {
                printf("Qual a idade do mais velho?");
                scanf (" %i", &maisvelho);
            }
            break;
        case 4:         // viúvo
                printf("Qual sua cidade?");
                scanf (" %s", cidade);
                printf("Qual seu salário?");
                scanf (" %f", &salario);
                break;
        default:
            printf("Erro.");
            break;}
    if (sit_civil == 1) {
        printf("Situação civíl: Solteiro \n");
        printf("idade: %i \n", idade);
    } else if (sit_civil == 2) {
        printf("Situação civíl: Casado \n");
        printf("sexo: %c\n" "cônjuge: %s\n", sexo, conjuge);
    } else if (sit_civil == 3) {
        printf("Situação civíl: Divorciado\n");
        printf("filhos: %i\n", filhos);
        if (filhos > 1) {
            printf("idade do mais velho: %i\n", maisvelho);
        }
    } else if (sit_civil == 4) {
        printf("Situação civíl: Viúvo\n");
        printf("Cidade atual: %s \n Salário: %f", cidade, salario);
    }
    return 0;
}