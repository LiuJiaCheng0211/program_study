#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Please enter the number: ");
    scanf("%d", &num);
    printf("output:");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}