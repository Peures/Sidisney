#include <stdio.h>
main()
{
	int x[6]; 
	int i, a=0, b=0;
	int par[6]; int impar[6];
	
	for(i=0;i<6;i++)
	{
		printf ("Digite um numero: \n");
		scanf("%d", &x[i]);
		
		if (x[i]%2==0)
		{
			par[a]=x[i];
			a++;
		}
		else
		{
			impar[b]=x[i];
			b++;
		}
	}
	printf("\nO numeros pares sao\n");
	for (i=0;i<a+1;i++)
	{
		{
		printf("%d\n", par[i]);
		}
	}
	printf("E os impares sao\n");
	for (i=0;i<b+1;i++)
	{
		if (impar[i]!=0)
		{
		printf("%d\n", impar[i]);
		}
	}
}
