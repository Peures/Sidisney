#include <stdio.h>
main()
{
	int a[10];
	int i, positivos, impar, mod;
	
	for(i=0;i<10;i++)
	{
		printf("Digite o valor\n");
		scanf("%d", &a[i]);
		if (a[i]!=0)
		{
			impar=impar+1;
		}
		if (a[i]>0)
		{
			positivos=positivos+1;
		}
	}
	printf("Tem %d positivos e %d impares.", positivos, impar);
}
		
