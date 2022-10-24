//https://www.acwing.com/problem/content/606/
#include<stdio.h>
#define PI 3.14159
int main()
{
    double A, R;
    scanf_s("%lf", &R);
    A = PI * R * R;
    printf("A=%.4lf\n", A);
    return 0;
}