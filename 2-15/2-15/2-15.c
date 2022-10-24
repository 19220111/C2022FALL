//https://www.acwing.com/problem/content/719/
#include<stdio.h>
int main()
{
    int x1 = 0, x2 = 1, x3 = x1 + x2, i;
    int N;
    scanf_s("%d", &N);
    for (i = 0; i < N; i++)
    {
        printf("%d ", x1);
        x1 = x2; x2 = x3; x3 = x1 + x2;
    }
    return 0;
}
