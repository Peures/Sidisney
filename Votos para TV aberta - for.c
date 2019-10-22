#include <stdio.h>
main()
{
    int a, b=1, globo, sbt, record, bandeirantes, none;
    
    for (b=1;b<=1500;b=b+1)
    {
    	printf("Vote: \n");
    	scanf("%d", &a);
        switch(a)
        {
            case 1:
                globo=globo+1;
                break;
            case 2:
                sbt=sbt+1;
                break;
            case 3:
                record=record+1;
                break;
            case 4:
                none=none+1;
                break;
            case 5:
                bandeirantes=bandeirantes+1;
                break;
            default:
                printf("Voce cometeu algum erro, tente novamente.\n");
                break;
        }
    }
    printf("O numero total de votos para cada fica:\nGlobo: %d\nSBT: %d\nRecord: %d\nBandeirantes: %d\nNulos: %d\n", globo, sbt, record, bandeirantes, none);
}
