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
	int i, maior, fon;
	
	for(i=0;i<y;i++)
	{
		if (x[i]>x[i-1])
		{
			maior=x[i];
			fon=i;
		}
	}
	printf("O maior eh %d e se encontra na posicao x[%d]", maior, fon);
}
main()
{
	int a[20], i, resultado;
	
	preenche(a,20);
	
	check(a,20);
}   	
