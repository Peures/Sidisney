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
	int i, impar=0;
	
	for(i=0;i<y;i++)
	{
		if (x[i]%2==0)
		{
			printf("O numero %d eh par e se encontra na posicao x[%d].\n", x[i], i);
		}
	}
}
main()
{
	int a[20], i, resultado;
	
	preenche(a,20);
	
	check(a,20);
}   
