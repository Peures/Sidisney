#include <stdio.h>	

main() {
float a, b, c;
int d;

	printf("Digite a primeira e a segunda nota do aluno: \n");
	scanf("%f %f", &a, &b);

	c=(a+b)/2;

	printf("Digite o curso que ele deseja fazer, sendo: \n 1-direito\n 2-fisioterapia\n 3-sistema de informacao\n 4-administracao\n\n");
	scanf("%d", &d);

	switch(d)
	{
		case 1:
			if (c>=9) {
				printf("Aprovado.\n");break;}
			else {
				printf("Reprovado.\n");break;}
		case 2:
			if (c>=8){
				printf("Aprovado.\n");break;}
			else {
				printf("Reprovado.\n");break;}
		case 3:
			if(c>=7) {
				printf("Aprovado.\n");break;}
			else {
				printf("Reprovado.\n");break;}
		case 4:
			if (c>=5) {
				printf("Aprovado.\n");break;}
			else {
				printf("Reprovado.\n");break;}
		default: printf("Algo deu errado, tente novamente.");
	}
}
