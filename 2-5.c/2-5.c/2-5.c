#include <stdio.h>
int main()
{
    int a, b;
    scanf_s("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    int t;
    t = a;
    a = b;
    b = t;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}