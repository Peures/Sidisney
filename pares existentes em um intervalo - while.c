#include <stdio.h>
main()
{
    int a, b, mod;

    printf("Digite o primeiro e o segundo numero, sendo eles, respectivamente, menor e maior. \n");
    scanf("%d %d", &a, &b);

    a=a+1;
    while (a<b)
    {
        mod=a%2;
        if (mod==0)
        {
            printf("%d ", a);
        }
    a=a+1;    
    }
    

    
}
