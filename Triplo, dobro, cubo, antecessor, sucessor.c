#include <stdio.h>
main()
{
    int a, b;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);
    printf("Agora, digite a operacao desejada, sendo:\n1-Dobro\n2-Triplo\n3-Cubo\n4-Antecessor\n5-Sucessor\n");
    scanf("%d", &b);

    switch (b)
    {
        case 1:
            printf("Fica %d.", a*2);
            break;
        case 2:
            printf("Fica %d.", a*3);
            break;
        case 3:
            printf("Fica %d.", a*a*a);
            break;
        case 4:
            printf("O antecessor eh %d.", a-1);
            break;
        case 5:
            printf("O sucessor eh %d.", a+1);
            break;
        default:
            printf("Algo deu errado, tente de novo.");
            break;
    }
}
