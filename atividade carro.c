#include <stdio.h>

main(){
	int a;
	float b, c;
	printf("Digite a figura da qual voce quer saber a area, sendo:\n1-Triangulo\n2-Retangulo\n3-Quadrado\nOU\nDigite 4-para o cubo do numero\n\n");
	scanf("%d",&a);
	
	switch (a)
	{
		case 1:
			printf("Digite a altura e a base do triangulo, respectivamente: \n");
			scanf("%f %f", &b, &c);
			printf("Fica %.2f cm.", (b*c)/2);break;
		case 2:
			printf("Digite a altura e base do retangulo: \n");
			scanf("%f %f", &b, &c);
			printf("Fica %.2f cm.", b*c);break;
		case 3:
			printf("Digite o tamanho do lado do quadrado: \n");
			scanf("%f", &b);
			printf("Fica %.2f.", b*b);break;
		case 4:
			printf("Digite o numero: \n");
			scanf("%f", &b);
			printf("Fica %.2f.", b*b*b);break;
		default: 
			printf("Algo deu errado, tente de novo.");break;
	}
}

