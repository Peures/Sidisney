#include <stdio.h>
main()
{
	int a[6];
	int i, soma, qnt;
	
	for(i=0;i<6;i++)
	{
		printf("Digite um valor\n");
		scanf("%d", &a[i]);
		if (a[i]<10)
		{
			soma=soma+a[i];
			qnt=qnt+1;
		}
	}
	printf("A soma fica %d, a media fica %d e a quantitade de menores que 10 eh %d.", soma, soma/qnt, qnt);

}
