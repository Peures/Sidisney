#include <stdio.h>

main()
{
    int cy, a;
    printf("Digite um numero: \n");
    scanf("%d", &a);
    for (cy=1;cy<=10;cy++)
    {
        printf("%d * %d = %d.\n", a, cy, a*cy);
    }
}
