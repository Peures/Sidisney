#include <stdio.h>
main()

{
int A, B, c, d;

printf("Escreva o primeiro valor: ");
scanf("%d",&A);
printf("Escreva o segundo valor: ");
scanf("%d",&B);

if (A<B)
	{
		printf("%d,%d", A, B);
	}
else
	if (B<A)
	{
		printf("%d,%d", B, A);
	}
	else
	{
		printf("Os numeros sao iguais");
	}
}

