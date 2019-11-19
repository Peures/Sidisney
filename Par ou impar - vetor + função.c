#include <stdio.h>
void preenche(int x[], int y)
{
	int i;
	
	for(i=0;i<y;i++)
	{
		printf("Digite o valor do vetor: \n");
		scanf("%d", &x[i]);
	}
}
int check(int x[], int y)
{
	int i;
	
	for(i=0;i<y;i++)
	{
		if (x[i]%2==0)
		{
			printf("%d eh par.\n", x[i]);
		}
		else
		{
			printf("%d eh impar.\n", x[i]);
		}
	}
}
main()
{
	int a[10], i, resultado;
	
	preenche(a,10);
	
	check(a,10);
}   
