#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 開始
    int n;
    // 輸入
    printf("Please enter the number: ");
    scanf("%d", &n);
    // 處理
    int x, y, preX, preY, p;
    for (y = 1; y <= (n / 2 + 1); y++)
    {
        for (x = 1; x <= n; x++)
        {
            // 判斷列印空格還是文字
            // 外加算式
            p = (n + 1) / 2;
            // 基於座標法的布林代數
            preX = ((x == p) && y == 1) || x == p + (y - 1) || x == p - (y - 1);
            preY = y == p;
            if (preX || preY)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            preX = 0, preY = 0;
        }
        printf("\n");
    }
    // 輸出
    // 結束
    system("pause");
    return 0;
}