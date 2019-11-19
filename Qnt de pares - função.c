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
	int i, par=0;
	
	for(i=0;i<y;i++)
	{
		if (x[i]%2==0)
		{
			par=par+1;
		}
	}
	printf("Tem %d numeros pares ai dentro.", par);
}
main()
{
	int a[10], i, resultado;
	
	preenche(a,10);
	
	check(a,10);
}   
