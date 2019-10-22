#include <stdio.h>
main()
{
    int a, b=1, globo=0, sbt=0, record=0, bandeirantes=0, none=0;	
    
    while (b<=5)
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
                bandeirantes=bandeirantes+1;
                break;
            case 5:
                none=none+1;
                break;
            default:
                printf("Voce cometeu algum erro, tente novamente.\n");
                a--;
				break;
        }
    b=b+1;
    
    }
    printf("O numero total de votos para cada fica:\nGlobo: %d\nSBT: %d\nRecord: %d\nBandeirantes: %d\nNulos: %d\n", globo, sbt, record, bandeirantes, none);
}
