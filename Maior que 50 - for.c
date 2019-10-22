#include <stdio.h>
main()
{
    int a, b, c;
    
    for ( a = 0; a <= 50; a++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &b);

        if (b>50)
        {
            c=c+1;
        }
    }
    printf("Tem %d numeros maiores que 50.\n");
}
