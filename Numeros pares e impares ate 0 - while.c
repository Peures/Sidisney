#include <stdio.h>
main()
{
    int a, b, c, d;
    a=1;
    while (a != 0)
    {
        printf("Digite um numero: \n");
        scanf("%d", &a);
        c=a%2;
        if (c==0)
        {
            b=b+1;
        }
        else
        {
            d=d+1;
        }
    }
    printf("Tem %d numeros pares e %d numeros impares.\n", b, c);
}
