#include <stdio.h>
main()
{
	int b[5]; int c[4]; int d[3]; int z[3];
	int a;
	float smh[100];

		for (a=1;a<6;a++)
			{
			printf("Entre com todos os valores do vetor b\n");
			scanf("%d", &b[a]);
			}
		for (a=1;a<5;a++)
			{
			printf("Entre com todos os valores do vetor c\n");
			scanf("%d", &c[a]);
			}
		for (a=1;a<4;a++)
			{
			printf("Entre com todos os valores do vetor d\n");
			scanf("%d", &d[a]);
			}
		for (a=1;a<=3; a++)
			{
				z[a]= b[a] + c[a] + d[a ];
				printf("fica %d\n", z[a]);
			}
}

