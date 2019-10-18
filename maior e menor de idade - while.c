#include <stdio.h>
main()
{
    int age, cycle;

    while (cycle<=75)
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
        cycle=cycle+1;
    }
}
