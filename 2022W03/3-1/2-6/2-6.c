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
		printf("%d����һ������\n", n);
	else
		printf("%d��һ������\n", n);
	return 0;
}