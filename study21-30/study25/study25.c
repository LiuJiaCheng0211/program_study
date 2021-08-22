#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, max, v[3] = {3, 5, 0};
    max = v[0];
    for (i = 1; i <= 2; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    printf("Max: %d\n",max);
    system("pause");
    return 0;
}