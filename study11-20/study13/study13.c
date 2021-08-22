#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, x = 0, y = 0;
    for (c = 1; c <= 100; c++)
    {
        x = (c - 1)/10 + 1;
        y = (c - 1)%10 + 1;
        printf("%d x %d = %d\n", x, y, x * y);
    }
    printf("\n");
    system("pause");
    return 0;
}