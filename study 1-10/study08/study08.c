#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1, sum = 0, end = 0, count = 0;
    float average;
    printf("Please enter the number (0 : quiz):\n");
    while (num != 0)
    {
        scanf("%d", &num);
        sum = num + sum;
        count++;
    }
    printf("The sum is \"%d\"\n", sum);
    average = (float) sum / count;
    printf("The average is %f\n", average);
    system("pause");
    return 0;
}
