#include<stdio.h>
long long fun(long long a, long long b, long long p)
{
	long long ans = 1;

	while (a && b)
	{
		if (b & 1) ans = ((ans * a) % p) % p;

		a = (a * a) % p;

		b >>= 1;
	}

	return ans;
}

int main() {
	long long int n, p = 1;
	scanf_s("%lld", &n);
	p = fun(2, n, 20180520);
	printf("%lld", p);
}