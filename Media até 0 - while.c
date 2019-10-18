#include <stdio.h>
main()
{
    int a, b=0, c, d;
    
    a=1;
    while (a != 0)
    {
        printf("Digite um inteiro: \n");
        scanf("%d", &a);
        c=c+a;
        b=b+1;
    }
    printf("A media fica: %d\n", c/b);
}
