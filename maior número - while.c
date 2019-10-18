#include <stdio.h>
main()
{
    int a,b,c;
    
    

    for(c=1;c<=20;c=c+1)
    {
    	printf("Digite um numero: \n");
    	scanf("%d", &a);  
    	if (a>b)
    	{
        	b=a;
    	}
    }
    printf("O maior numero eh %d.\n", b);
    
}
