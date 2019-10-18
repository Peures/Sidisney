#include <stdio.h>
main()
{
    int ciclo;
    float numbah;

    for (ciclo=1;ciclo<=20;ciclo=ciclo+1)
    {
        printf("Digite o numero: \n");
        scanf("%f", &numbah);
        if (numbah>0)
        {
            printf("Positivo.\n");
        }
        else
        {
            if (numbah==0)
            {
                printf("Eh zero.\n");
            }
            else
            {
                printf("Eh negativo.\n");
            }
        }
    }   
}
