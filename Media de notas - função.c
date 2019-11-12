#include <stdio.h>
float valor1(float a, float b, float c)
{

	return (a+b+c)/3;
}
main()
{
	float a, b, c;
	printf("Digite o primeiro numero: \n");
	scanf("%f", &a);
	printf("Digite o segundo numero: \n");
	scanf("%f", &b);
	printf("Digite o terceiro numero: \n");
	scanf("%f", &c);
	printf("A media fica %.2f", valor1(a, b, c));
}	
