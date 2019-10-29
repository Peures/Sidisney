#include <stdio.h>
main()
{
	int a[10]; int b[10]; int par; int impar[10];
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("Digite um valor\n");
		scanf("%d", &a[i]);
		if (a[i]%2==0)
		{
			par=par+1;
		}
	}
	printf("Tem %d numeros pares.", par);
}
