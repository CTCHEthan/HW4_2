#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 0;

    while (x <= 100)
    {
        if(x % 2 == 1)
        {
            printf("%d\n", x);
        }
        x = x + 1;
    }




    return 0;
}
