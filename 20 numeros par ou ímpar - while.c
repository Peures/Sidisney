#include <stdio.h>
main()
{
    float teste;
    int a, ciclo;
    
	while (ciclo<=20)
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
    	ciclo=ciclo+1;
    }
}
