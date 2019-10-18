#include <stdio.h>
main()
{
    int a, b=0, c;
    
    while (a != 0)
    {
        printf("Digite um numero: \n");
        scanf("%d", &a);
        b=b+a;
    }
    printf("O somatorio fica %d.\n", b);
}
