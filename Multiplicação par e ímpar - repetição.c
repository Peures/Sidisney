#include <stdio.h>

main()
{
    int a, i, c;
    
	for (i=1;i<=10;i++)
    {
    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);
    
	c=(a%2);
    
	if (c==0)
    printf("Como ele eh par, fica %d.\n\n", a*2);
    else
    printf("Como ele eh impar, fica %d.\n\n", a*3);
	}
}
