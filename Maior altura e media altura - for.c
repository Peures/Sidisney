#include <stdio.h>
main()
{
    float height=0, tall=0, theight=0, theightm=0;
    int loop=1, sex=0, men=0;
    
    for (loop = 1; loop <= 50; loop=loop+1)
    {
        printf("Digite a aultura do individuo ai\n");
        scanf("%f", &height);
        
		printf("Digita o sexo do individuo ae, sendo 1 homem e 2 mulher.\n");
        scanf("%d", &sex);

        if (height>tall)
        {
            tall=height;
        }
        if (sex=1)
        {
            men=men+1;
            theightm=theightm+height;
        }
        theight=theight+height;
    }
    printf("A maior altura da turma eh: %.2f\nA media da altura dos homens eh: %.2f\nA media da altura da turma eh: %.2f\n", tall, theightm/men, theight/50);
}
