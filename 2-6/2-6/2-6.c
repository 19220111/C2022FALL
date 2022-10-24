#include<stdio.h>
int main()
{
	int n, i,m;
	scanf_s("%d", &n);
	m = sqrt(n);
	for (i = 2; i <= m; i++)
	{
		if (n % m == 0)
			break;
	}
	if (i > m)
		printf("%d不是一个素数\n", n);
	else
		printf("%d是一个素数\n", n);
	return 0;
}