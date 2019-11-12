#include <stdio.h>
valor1(int a, int b, int c)
{

	return a+b+c;
}
main()
{
	int a, b, c;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);
	printf("Digite o segundo numero: \n");
	scanf("%d", &b);
	printf("Digite o terceiro numero: \n");
	scanf("%d", &c);
	printf("A soma fica %d", valor1(a, b, c));
}
