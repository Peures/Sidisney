#include <stdio.h>



main()

{
int a, b, c, d;

	
	printf("Escreva um numero a\n");
	scanf("%d", &a);
	printf("Escreva um numero b\n");
	scanf("%d", &b);
	
	if(a<b)
	{
		printf("%.d eh menor que %.d", a, b);	
	}	
	else

	{
		printf("%.d eh menor que %.d", b ,a);
	}
}
