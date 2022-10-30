https://www.acwing.com/problem/content/674/
#include<stdio.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
    if (x <= 2000.00)
        printf("Isento\n");
    if (x > 2000.00 && x <= 3000.00)
    {
        y = (x - 2000) * 0.08;
        printf("R$ %.2lf\n", y);
    }
    if (x > 3000.00 && x <= 4500.00)
    {
        y = 1000 * 0.08 + (x - 3000) * 0.18;
        printf("R$ %.2lf\n", y);
    }
    if (x > 4500)
    {
        y = 1000 * 0.08 + 1500 * 0.18 + (x - 4500) * 0.28;
        printf("R$ %.2lf\n", y);
    }
    return 0;
}