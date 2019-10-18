#include <stdio.h>
main()
{
	int alunos;
	float nota1, nota2, media;
	
	alunos=1;
	while (alunos<=10)
	{
		printf("Digite a primeira e a segunda nota do aluno %d: \n", alunos);
		scanf("%f %f", &nota1, &nota2);
		media=(nota1+nota2)/2;
		printf("A media do aluno %d eh %.2f.\n\n", alunos, media);
		alunos=alunos+1;
	}
}
