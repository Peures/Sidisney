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
	int i, soma=0, media=0;
	
	for(i=0;i<y;i++)
	{
		if (x[i]<10)
		{
			soma=soma+x[i];
			media=media+1;
		}
	}
	printf("A soma eh %d.\nA quantidade de numeros eh %d.\nA media eh %d.", soma, media, soma/media);
}
main()
{
	int a[6], i, resultado;
	
	preenche(a,6);
	
	check(a,6);
}   	
