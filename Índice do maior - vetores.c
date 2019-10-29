#include <stdio.h>
main()
{
	int a[20];
	int i, maior;
	
	for(i=0;i<20;i++)
	{
		printf("Digite o valor \n");
		scanf("%d", &a[i]);
		
		if (a[i]> a[i-1])
		{
			maior=i;
		}
	}
	printf("O maior numero se localiza na posicao %d.", maior);
}
