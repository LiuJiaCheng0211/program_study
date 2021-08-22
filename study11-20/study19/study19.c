#include<stdio.h>
#include<stdlib.h>
int f(void);

int main()
{
    for(int i = 1;i <= 5;i++)
    {
        printf("%d\n",f());
    }
    system("pause");
    return 0;
}

int f(void)
{
    static int x = 0;
    return ++x;
}