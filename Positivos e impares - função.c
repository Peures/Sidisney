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
	int i, pos=0, impar=0;
	
	for(i=0;i<y;i++)
	{
		if (x[i]>0)
		{
			pos=pos+1;
		}
		if (x[i]%2!=0)
		{
			impar=impar+1;	
		}
	}
	printf("Tem %d numeros positivos e %d impares.", pos, impar);
}
main()
{
	int a[10], i, resultado;
	
	preenche(a,10);
	
	check(a,10);
}   	
