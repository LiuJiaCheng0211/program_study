#include <stdio.h>
#include <stdlib.h>
int sum(int);

int main()
{
    int n;
    printf("N = ");
    scanf("%d", &n);
    printf("%d", sum(n));
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (sum(n - 1) + n);
}