#include <stdio.h>
abelha(int b[])
{
	int i;
	for(i=0;i<b[i];i++)
	{
		printf("*");
	}
	printf("\n\n\n");
}
printao(int a)
{
	int i;
	for(i=0;i<a;i++)
	{
		int b[i];
		printf("Quantos * voce quer na linha %d?\n", i+1);
		scanf("%d", &b[i]);
	}
}
main()
{
	int i, b[i], fon;
	printf("Quantas linhas voce quer?\n");
	scanf("%d", &fon);
	printao(fon);
	abelha(b[i]);
}
