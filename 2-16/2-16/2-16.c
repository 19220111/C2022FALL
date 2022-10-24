//https://www.acwing.com/problem/content/722/
#include<stdio.h>
int main()
{
    int A, N;
    int i, sum = 0;
    scanf_s("%d%d", &A, &N);
    while (N <= 0)
    {
        scanf("%d", &N);
    }
    for (i = A; i < A + N; i++)
        sum = sum + i;
    printf("%d\n", sum);
    return 0;
}