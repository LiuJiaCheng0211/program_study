#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float ans;
    char op;
    printf("Please enter the formula:\n");
    scanf("%d%c%d", &num1, &op, &num2);
    switch (op)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = (float) num1 / num2;
        break;
    }
    printf("The ans is %f\n",ans);
    system("pause");
    return 0;
}
