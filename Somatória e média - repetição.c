#include <stdio.h>

main()
{
    int i;
    float a, tot;
    for (i=1;i<=8;i++)
    {
        printf("Digite um numero: \n");
        scanf("%f", &a);
        tot=(tot+a);
    }
    printf("A somatoria fica %.2f e a media fica %.2f", tot, tot/8);
}
