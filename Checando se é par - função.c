#include <stdio.h>
valor1(int a)
{
	if (a%2==0)
	{
		return a*5;
	}
	else
	{
		return a*3;
	}
}
main()
{
	int a;
	printf("Digite o numerao ae\n");
	scanf("%d", &a);
	printf("Fica %d.", valor1(a));
}
