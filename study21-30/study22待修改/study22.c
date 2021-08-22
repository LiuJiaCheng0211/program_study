#include <stdio.h>
#include <stdlib.h>
int rand1to2(void);
int rand1to7(void);

int main()
{
    int i = 0, x = 0, y = 0;
    while (1)
    {
        do
        {
            y = 0;
            x = 0;
            for (i = 1; i <= 7; i++)
            {
                x = rand1to2();
                printf(" %d", x);
                y = y + x;
                if (y == 7)
                {
                    break;
                }
            }
            if (y == 7)
            {
                printf("success");
            }
            printf("\n");
        } while (y != 7);
    }
    system("pause");
    return 0;
}

int rand1to2(void)
{
    return (rand() % 2 + 1);
}
