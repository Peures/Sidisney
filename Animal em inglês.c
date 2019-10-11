#include <stdio.h>

main()
{
    int ing;
    printf("Digite o que voce deseja traduzir, sendo:\n1-Cao\n2-Gato\n3-Peixe\n4-Mesa\n5-Janela\n6-Passaro\n");
    scanf("%d", &ing);

    switch (ing)
    {
        case 1:
            printf("Em ingles fica: Dog.");
			break;
        case 2:
            printf("Em ingles fica: Cat.");
			break;
        case 3:
            printf("Em ingles fica: Fish.");
			break;
        case 4:
            printf("Em ingles fica: Table.");
			break;
        case 5:
            printf("Em ingles fica: Window.");
			break;
        case 6:
            printf("Em ingles fica: Bird.");
			break;
        default:
            printf("Algo deu errado, tente de novo.");
			break;
    }
}
