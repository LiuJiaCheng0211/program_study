#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0, productDataArray[5] = {90, 75, 83, 89, 71}, id = 0;
    do
    {
        printf("Please enter the id: ");
        scanf("%d", &id);
        if (id != 0)
        {
            total = total + productDataArray[id-1];
        }
        if(id != 0 && id > 5)
        {
            printf("Not found\a\n");
        }
    } while (id != 0);
    printf("Total: %d\n", total);
    system("pause");
    return 0;
}