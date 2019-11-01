#include <stdio.h>
main()
{
	int i, a; int x[10];
	
	for(i=0;i<10;i++)
	{
		printf("digite seu numero: \n");
		scanf("%d", &x[i]);
	}
	printf("Digite o numero que voce quer: \n");
	scanf("%d", &a);
	for (i=0;i<10;i++)
	{
		if(a==x[i])
		{
			printf("O valor digitado foi %d e ele se encontra na posicao x[%d].\n", a, i);
		}
	}
}
