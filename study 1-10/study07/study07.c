#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 變數宣告
    int id;
    // 輸入
    printf("please enter the id:\n");
    scanf("%d", &id);
    // 處理+輸出
    switch (id)
    {
    case 1:
        printf("Leo\n");
        break;
    case 2:
        printf("Tony\n");
        break;
    case 3:
        printf("Shiny\n");
        break;
    default:
        printf("not found\n\a");
        break;
    }
    // 結束
    system("pause");
    return 0;
}
