#include <stdio.h>
main()
{
    int i;
    float a;
    for(i=1;i<=10;i++)
    {
        printf("Digite um numero: \n");
        scanf("%f", &a);
        printf("Fica %.2f e %.2f.\n", a*2, a*3);
	}
}

