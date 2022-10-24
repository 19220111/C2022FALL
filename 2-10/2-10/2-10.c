//https://www.acwing.com/problem/content/616/
#include<stdio.h>
int main()
{
    int a, b, c, t;
    scanf_s("%d%d%d", &a, &b, &c);
    if (b > a)
    {
        t = a;
        a = b;
        b = t;
    }
    if (c > a)
    {
        t = a;
        a = c;
        c = t;
    }
    printf("%d eh o maior\n", a);
    return 0;
}