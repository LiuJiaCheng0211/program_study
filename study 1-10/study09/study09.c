#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 開始
    int id, total = 0, end = 0;
    printf("Please enter the product id:\n");
    // 輸入 
    do
    {
        scanf("%d",&id);
        switch (id)
        {
        case 0:
            end = 1;
            break;
        case 1:
            printf("Shampoo 125 NTD\n");
            total += 125;
            break;
        case 2:
            printf("Body soap 100 NTD\n");
            total += 100;
            break;
        case 3:
            printf("fase soap 100 NTD\n");
            total += 100;
            break;
        default:
            printf("not found\n\a");
        }
    } while (end == 0);
    // 輸出
    printf("The total is %d\n",total);
    // 結束
    system("pause");
    return 0;
}
