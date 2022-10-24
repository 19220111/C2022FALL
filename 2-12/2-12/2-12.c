//https://www.acwing.com/problem/content/660/
#include<stdio.h>
int main()
{
    double a, b, c, x, y;
    scanf_s("%lf%lf%lf", &a, &b, &c);
    if (b * b - 4 * a * c < 0)
        printf("Impossivel calcular\n");
    if (a == 0)
        printf("Impossivel calcular\n");
    if (a != 0 && b * b - 4 * a * c >= 0)
    {
        x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        y = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("R1 = %.5lf\n", x);
        printf("R2 = %.5lf\n", y);
    }
    return 0;
}