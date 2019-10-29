#include <stdio.h>
main()
{
	int a[20]; int b[10]; int par; int impar[10];
	int i;
	
	for (i=0;i<20;i++)
	{
		printf("Type valor\n");
		scanf("%d", &a[i]);
		if (a[i]%2==0)
		{
			printf("No lugar a[%d] tem um numero par.\n", a[i]);
		}
	}
}
