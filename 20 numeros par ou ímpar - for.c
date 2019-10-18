#include <stdio.h>
main()
{
    float teste;
    int a, ciclo;
    
	for (ciclo=1;ciclo<=20;ciclo=ciclo+1)
    {
        printf("Digite o numero: \n");
        scanf("%d", &a);
        teste=(a%2);
		if (a==0)
        	{
        		printf("O numero eh zero.\n");
			}
        	else{
			if (teste==0)
        	{
            	printf("O numero eh par.\n");
        	}
        	else
        	{
            	printf("O numero eh impar.\n");
        	}
    	}
    }
}
