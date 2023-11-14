/* Fazer uma solução que permita ao usuário entrar com um número.
   Em seguida, o usuário poderá escolher uma das operações:
   Fazer o dobro, o triplo, o quadruplo, ou o quintplo desse número.
   Depois, deverá mostrar o número informado pelo usuário, a operação realzada e o resultado da operação.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float num;
    char op[30];
    int op1;
    printf("Digite um número: ");
    scanf("%f", &num);
    printf("escolha uma das operações: dobro, triplo, quadruplo ou quintuplo: ");
    fflush(stdin);
    scanf("%s", &op);
    if (strcasecmp(op, "dobro") == 0)
        { op1 = 2; }
    else if (strcasecmp(op, "triplo") == 0)
        { op1 = 3; }
    else if (strcasecmp(op, "quadruplo") == 0)
        { op1 = 4; }
    else if (strcasecmp(op, "quintuplo") == 0)
        { op1 = 5; }
    
    switch(op1)
    {
        case 2:
            printf("%f", num);
            printf("dobro\n");
            printf("%f", (num*op1));
            break;
        case 3:
            printf("%f", num);
            printf("triplo\n");
            printf("%f", (num*op1));
            break;
        case 4:
            printf("%f", num);
            printf("%f * %i\n", num, op1);
            printf("%f", (num*op1));
            break;
        case 5:
            printf("%f", num);
            printf("quintuplo\n");
            printf("%f", (num*op1));
            break;
        default:
            printf("erro.\n");
            break;
    }
}