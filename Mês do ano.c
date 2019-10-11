#include <stdio.h>
main()
{
    int mes;

    printf("Digite o mes que deseja saber: \n");
    scanf("%d", &mes);

    switch (mes)
    {
        case 1:
            printf("O mes eh janeiro.");
            break;
        case 2:
            printf("O mes eh fevereiro.");
            break;
        case 3:
            printf("O mes eh marco.");
            break;
        case 4:
            printf("O mes eh abril.");
            break;
        case 5:
            printf("O mes eh maio.");
            break;
        case 6:
            printf("O mes eh junho.");
            break;
        case 7:
            printf("O mes eh julho.");
            break;
        case 8:
            printf("O mes eh agosto.");
            break;
        case 9:
            printf("O mes eh setembro.");
            break;
        case 10:
            printf("O mes eh outubro.");
            break;
        case 11:
            printf("O mes eh novembro.");
            break;
        case 12:
            printf("O mes eh dezembro.");
            break;
        default:
            printf("Algo deu errado, tente de novo.");
            break;
    }
}