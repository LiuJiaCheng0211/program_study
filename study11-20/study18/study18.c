#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    for (int i = 1; i <= 6; i++)
    {
        printf("dice: %d\n", rand() % 6 + 1);
    }
    system("pause");
    return 0;
}