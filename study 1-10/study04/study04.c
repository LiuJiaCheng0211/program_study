#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, t;
    printf("Please enter three integer:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b){t = a;a = b;b = t;}
    if (a > c){t = a;a = c;b = t;}
    if (b > c){t = b;b = c;c = t;}
    printf("%d < %d < %d\n", a, b, c);
    system("pause");
    return 0;
}
