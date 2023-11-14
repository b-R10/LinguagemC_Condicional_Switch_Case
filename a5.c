#include <stdio.h>
#include <stdlib.h>

int main()
{
	int op;
	float a, b, x;
	printf("Digite uma das opções abaixo: \n"
		"1 - Adição\n"
		"2 - Subtração\n"
		"3 - Multiplicação\n"
		"4 - Divisão\n");
	scanf("%i", &op);
	printf("digite dois números: \n");
	scanf("%f %f", &a, &b);
	switch(op)
	{
		case 1:
			x = (a + b);
			printf("%f", x);
			break;
		case 2:
			x = (a - b);
			printf("%f", x);
			break;
		case 3:
			x = (a * b);
			printf("%f", x);
			break;
		case 4:
			x = (a / b);
			printf("%f", x);
			break;
		default:
			printf("erro.");
			break;
	}
	return 0;
}
