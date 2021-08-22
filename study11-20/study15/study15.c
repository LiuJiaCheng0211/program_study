#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 開始
    int x, y, preX, preY, n;
    // 輸入
    printf("Please enter the loop number: ");
    scanf("%d", &n);
    // 處理
    int p = n / 2;
    for (y = 0; y <= n / 2; y++)
    {
        for (x = 0; x <= n; x++)
        {
            preX = x == 0 || x == n || x == p;
            preY = y == 0 || y == n / 2 || y == p / 2;
            if (preX || preY)
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
    // 輸出
    system("pause");
    // 結束
    return 0;
}