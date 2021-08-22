#include <stdio.h>
#include <stdlib.h>
int preX(int, int, int);
int preY(int, int, int);
void render(int);

int main()
{
    int n;
    printf("Please enter the number: ");
    scanf("%d", &n);
    render(n);
    render(n / 2 + 1);
    system("pause");
    return 0;
}

int preX(int x, int y, int p)
{
    return ((x == p) && y == 1) || x == p + (y - 1) || x == p - (y - 1);
}

int preY(int x, int y, int p)
{
    return y == p;
}

void render(int n)
{
    int p, x, y;
    for (y = 1; y <= (n / 2 + 1); y++)
    {
        for (x = 1; x <= n; x++)
        {
            // 判斷列印空格還是文字
            // 外加算式
            p = (n + 1) / 2;
            // 基於座標法的布林代數
            if (preX(x, y, p) || preY(x, y, p))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}