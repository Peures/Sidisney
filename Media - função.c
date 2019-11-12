#include <stdio.h>
valor1(int a, int b, int c, int d)
{

	return (a+b+c+d)/4;
}
main()
{
	int a, b, c, d;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);
	printf("Digite o segundo numero: \n");
	scanf("%d", &b);
	printf("Digite o terceiro numero: \n");
	scanf("%d", &c);
	printf("Digite o quarto numero: \n");
	scanf("%d", &d);
	printf("A media fica %d", valor1(a, b, c, d));
}
