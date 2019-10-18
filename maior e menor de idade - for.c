#include <stdio.h>
main()
{
    int age, cycle;

    for (cycle=1;cycle<=75;cycle=cycle+1)
    {
        printf("Digite a idade da pessoa: \n");
        scanf("%d", &age);
        if (age>=18)
        {
            printf("Maior de idade.\n");
        }
        else
        {
            printf("Menor de idade.\n");
        }
    }
}
