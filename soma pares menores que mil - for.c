#include <stdio.h>
main()
{
    int a, b=0, c=0;
    
    for (a = 0; a < 1000; a++)
    {
        b=a%2;
        if (b==0)
        {
            c=c+a;
        }   
    }
    printf("eh %d.", c);
}
