#include <stdio.h>
main()
{
    int a=0, b=0, c=0;
    
    while (a<1000)
    {
        b=a%2;
        if (b==0)
        {
            c=c+a;
        }
    a=a+1;   
    }
    printf("eh %d.", c);
}
