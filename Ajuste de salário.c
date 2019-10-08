#include <stdio.h>

main(){
	int b;
	float a, c;
	printf("Digite o salario atual do empregado: \n");
	scanf("%f", &a);
	printf("Digite a categoria do empregado: \n");
	scanf("%d", &b);
	
	switch (b)
		{
			case 1:
				c=(0.05*a);
				printf("O salario inicial era %f e agora fica %2.f.", a, a+c);
				break;
			case 2:
				c=(0.1*a);
				printf("O salario inicial era %f e agora fica %2.f.", a, a+c);
				break;
			case 3:
				c=(0.15*a);
				printf("O salario inicial era %f e agora fica %2.f.", a, a+c);
				break;
			case 4:
				c=(0.20*a);
				printf("O salario inicial era %f e agora fica %2.f.", a, a+c);
				break;
			default:
				printf("Algo deu errado, tente novamente.");
				break;
		}


}
