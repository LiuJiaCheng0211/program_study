#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int counter[6] = {0}, j;
    for (int i = 1; i <= 60000000; i++)
    {
        counter[rand() % 6]++;
    }
    for (j = 1; j <= 6; j++)
    {
        printf("%d: %d\n", j, counter[j - 1]);
    }
    system("pause");
    return 0;
}