#include <stdio.h>
#include <stdlib.h>
int s(int);

int main()
{
    int n;
    printf("N = ");
    scanf("%d", &n);
    printf("%d\n", s(n));
    system("pause");
    return 0;
}

int s(int n)
{
    if (n <= 2)
    {
        return n;
    }
    return s(n - 1) + s(n - 2);
}