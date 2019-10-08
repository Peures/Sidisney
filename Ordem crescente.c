#include <stdio.h>

main()

{
int A, B, c, menor;

printf("Escreva o primeiro valor: ");
scanf("%d",&A);
printf("Escreva o segundo valor: ");
scanf("%d",&B);
printf("Escreva o terceiro valor: ");
scanf("%d", &c);
menor=c;

if (A<menor)
{
	menor=A;
}
else
	if (B<menor)
	{
		menor=B;
	}
	else
	{
		menor=menor;
	}
printf("O menor numero eh: %d", menor);
	
}
