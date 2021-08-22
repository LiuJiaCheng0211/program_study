#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char op;
    double ans;
    scanf("%d%c%d", &a, &op, &b);
    if (op == '+')
    {
        ans = a + b;
    }
    if (op == '-')
    {
        ans = a - b;
    }
    if (op == '*')
    {
        ans = a * b;
    }
    if (op == '/')
    {
        ans = (double)a / (double)b;
    }
    printf("Ans:%f\n", ans);
    system("pause");
}
