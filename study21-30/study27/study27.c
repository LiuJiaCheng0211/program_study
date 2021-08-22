#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int counter[12] = {0};
    int i, dice1, dice2, sum;
    for (i = 1; i <= 10000; i++)
    {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        counter[sum - 2]++;
    }
    for (i = 2; i <= 12; i++)
    {
        printf("%d: %d\n", i, counter[i - 2]);
    }
    system("pause");
    return 0;
}