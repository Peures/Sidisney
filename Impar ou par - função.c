#include <stdio.h>
valor1(int a)
{
	if (a%2==0)
	{
		printf("O numero eh par.");
	}
	else
	{
		printf("O numero eh impar.");
	}
}
main()
{
	int a;
	printf("Digite o numerao ae\n");
	scanf("%d", &a);
	valor1(a);
}
