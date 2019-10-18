#include <stdio.h>
main()
{
    int a, b, c;
    
    while (a<=20213)
    {
        printf("Digite um numero: \n");
        scanf("%d", &b);

        if (b>50)
        {
            c=c+1;
        }
        a=a+1;
    }
    printf("Tem %d numeros maiores que 50.\n");
}
