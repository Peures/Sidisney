#include <stdio.h>

main(){
	float a;
	int b;
	
	printf("Digite o preco da venda: \n");
	scanf("%f", &a);
	printf("Digite quantas prestacoes: \n");
	scanf("%d", &b);
	
	switch (b)
	{
		case 5:
			printf("Fica %.2f por prestacao.", a/b);break;
		case 10:
			printf("Fica %.2f por prestacao.", a/b);break;
		case 12:
			printf("Fica %.2f por prestacao.", a/b);break;
		case 24:
			printf("Fica %.2f por prestacao.", a/b);break;
		default:
			printf("Algo deu errado. Tente de novo.");break;
	}
}
