#include <stdio.h>
main()
{
	float a, b, c;
	float sum[200]; int i;
	
	for (i=0;i<200;i++)
	{
		printf("Digite a sua media: \n");
		scanf("%f", &sum[i]);
		
		if (sum[i]>sum[0])
		{
			sum[0]=sum[i];
		}
	}
	printf("A media do aluno com a maior nota eh %.2f", sum[0]);
}
