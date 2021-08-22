#include <stdio.h>
#include <stdlib.h>
int sigma(int, int, int, int);

int main()
{
    // 開始
    long int k = 0, n = 0, x = 0, y = 0, output = 0, sum = 0, high = 0;
    printf("Sigma k, n, x, y                      \n"
           "(k * x) + y, k + 1 return           \n\n"
           "EX: Sigma (k = 1, n = 3, x = 2, y = 1)\n"
           "EX: (1 * 2) + 1 = 3, 1 + 1   =>return \n"
           "EX: (2 * 2) + 1 = 5, 2 + 1   =>return \n"
           "EX: (3 * 2) + 1 = 7, 3 = n(3)=> end   \n"
           "EX: output: 3+5+7 = 12              \n\n");
    // 輸入
    printf("sigma k = ");
    scanf("%d", &k);
    printf("sigma n = ");
    scanf("%d", &n);
    printf("sigma x = ");
    scanf("%d", &x);
    printf("sigma y = ");
    scanf("%d", &y);
    sigma(k, n, x, y);
    system("pause");
    return 0;
}

int sigma(int k, int n, int x, int y)
{
    int output = 0, sum = 0, high = 0;
    printf("Output: ");
    if (n <= 100)
    {
        for (int i = k; i <= n; i++)
        {
            output = (k * x) + y;
            k++;
            sum = sum + output;
            printf("%d+", output);
        }
    }
    else
    {
        high = n - k + 1;
        sum = x * ((n + k) * high / 2) + high * y;
    }
    printf("\b = %d", sum);
    printf("\n");
    return 0;
}