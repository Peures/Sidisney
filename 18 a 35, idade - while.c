#include <stdio.h>
main()
{
    int age, mid, loop=1, mage=0, qnt;

    while (loop != 0)
    {
        qnt=qnt+1;
        printf("Digite a idade do habitante. \n");
        scanf("%d", &age);

        if (age>mage)
        {
            mage=age;
        }
        if (age>18)
        {
            if (age<35)
            {
                mid=mid+1;
            }
            
        }
        else
        {
            /* don't do shit. */
        }
        printf("Se deseja parar, digite 0. Senao, digite qualquer outra coisa.\n");
        scanf("%d", &loop);
    }
    printf("A maior idade eh %d anos, e a quantidade de individuos entre 18 e 35 eh %d pessoas.", mage, mid);
}		
