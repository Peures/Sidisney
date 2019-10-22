#include <stdio.h>
main()
{
    float height, theight;
    int loop=1, sex=0, men=0, women=0, age=0, tage, tmage;
    
    for (loop = 1; loop <= 1000; loop=loop+1)
    {
        printf("Digite o sexo do individuo, sendo 0 mulher e 1 homem.\n");
        scanf("%d", &sex);

        if (sex==0)
        {
            printf("Digite a altura da individua.\n");
            scanf("%f", &height);
            theight=theight+height;
            women=women+1;
        }
		else 
		{
        	if (sex==1)
        	{
        	    tmage=tmage+age;
        	    men=men+1;
        	}
        	else
        	{
        		printf("Voce fez algo errado, tente de novo.\n");
        		loop--;
			}
    	}        
        printf("Digite a idade do individuo, em anos.\n");
        scanf("%d", &age);

        tage=tage+age;
        
        printf("\nAgora, outro.\n\n");
    }
    printf("A media da idade eh %d, a media da altura das mulheres eh %.2f e a media da idade dos homens eh %d.", tage/1000, theight/women, tmage/men);
}
