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
		if (x[i]%2!=0)
		{
			impar=impar+x[i];
		}
	}
	printf("A soma fica %d.", impar);
}
main()
{
	int a[6], i, resultado;
	
	preenche(a,6);
	
	check(a,6);
}   
