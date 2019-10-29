#include <stdio.h>
main()
{
	int a[6]; int b[10]; int par, impar;
	int i;
	
	for (i=0;i<6;i++)
	{
		printf("Type valor\n");
		scanf("%d", &a[i]);
		if (a[i]%2!=0)
		{
			impar=impar+a[i];
		}
	}
	printf("A soma dos numeros impares fica %d.", impar);
}
