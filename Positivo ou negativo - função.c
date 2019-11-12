#include <stdio.h>
valor1(int a)
{
	if (a>0)
	{
		printf("O numero eh positivo.");
	}
	else
	{
		if(a==0)
		{
			printf("O numero eh zero.");
		}
		else
		{
			printf("O numero eh negativo.");
		}
	}
}
main()
{
	int a;
	printf("Digite o numerao ae\n");
	scanf("%d", &a);
	valor1(a);
}
