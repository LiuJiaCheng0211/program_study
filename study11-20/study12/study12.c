#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 開始
    int num, find = 0, max;
    // 輸入
    printf("Please enter the max: ");
    scanf("%d", &max);
    // 處理
    for (num = 2; num <= max; num++)
    {
        find = 0;
        for (int i = 2; i < num && find == 0; i++)
        {
            if (num % i == 0)
            {
                find = 1;
            }
        }
        // 輸出
        if (find != 1)
        {
            printf("%d ", num);
        }
    }
    printf("\n");
    // 結束
    system("pause");
    return 0;
}