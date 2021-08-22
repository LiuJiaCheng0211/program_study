#include <stdio.h>
#include <stdlib.h>
int max_of_3(int, int, int);
int max_of(int, int);

int main()
{
    int a, b, c;
    printf("Please enter three number: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("The max is: %d\n", max_of_3(a, b, c));
    system("pause");
    return 0;
}

int max_of(int a, int b)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
}

int max_of_3(int a, int b,int c)
{
    return max_of(max_of(a, b),c);
}