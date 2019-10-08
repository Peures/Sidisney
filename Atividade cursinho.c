#include <stdio.h>	

main() {
int a, b, c, d, e;

	printf("Digite um numero: \n");
	scanf("%d",&a);
	printf("Digite outro numero: \n");
	scanf("%d",&b);
	printf("Outro: \n");
	scanf("%d",&c);
	printf("Mais um: \n");
	scanf("%d",&d);
	printf("Escolhendo um deles de acordo com a ordem de insercao: \n");
	scanf("%d",&e);
	
	
	switch (e)
	{
		case 1:
			printf("Voce digitou %d\n", a);break;
		case 2:
			printf("Voce digitou %d\n", b);break;
		case 3:
			printf("Voce digitou %d\n", c);break;
		case 4:
			printf("Voce digitou %d\n", d);break;
		default: printf("Refaz ae \n");
		
	}
}
