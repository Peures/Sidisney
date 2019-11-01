#include <stdio.h>
main()
{
	float med; float a[150];
	int i, qnt;
	
	for(i=0;i<150;i++)
	{
		printf("Digite a nota: \n");
		scanf("%f", &a[i]);
		
		if (a[i]>7)
		{
			qnt=qnt+1;
		}
		med=med+a[i];
	}
	printf("A media das notas eh: %.2f.\nO numero de notas acima da media eh: %.2f\n", med/150, qnt);
}
