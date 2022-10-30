https://www.acwing.com/problem/content/727/
#include<stdio.h>
int n, t, ans;
int main()
{
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n == 1) ans = 0;
        else ans = 1;
        for (int i = 2; i <= n / i; i++) if (!(n % i)) {
            ans += i;
            if (n / i != i) ans += n / i;
        }
        if (ans - n)
            printf("%d is not perfect", n);
        else
            printf("%d is perfect", n);
        puts("");
    }
    return 0;
}