#include <stdio.h>
main()

{
float A, B, c, d;

	
printf("Digite a primeira nota do aluno\n");
scanf("%f", &A);
printf("Digite a segunda nota do aluno\n");
scanf("%f", &B);
printf("Digite a terceira nota do aluno\n");
scanf("%f", &c);
d= (A+B+c)/3;
if (d>= 7)
	{
	printf("O aluno esta aprovado");
	}
else
	{
	printf("O aluno esta reprovado");
	}
}

