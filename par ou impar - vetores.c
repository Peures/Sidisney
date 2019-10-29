#include <stdio.h>
main()
{
	int a[10]; int b[10]; int par[10]; int impar[10];
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("Digite um valor\n");
		scanf("%d", &a[i]);
		b[i]=a[i]%2;
		if (a[i]==0)
		{
			printf("%d nao eh par nem impar.\n", a[i]);
		}
		if (b[i]== 0)
		{
			printf("%d eh par.\n", a[1]);
		}
		else
		{
			printf("%d eh impar.\n", a[i]);
		}
	}
}
