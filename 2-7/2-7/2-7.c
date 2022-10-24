#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, x=1,y;
	scanf_s("%d%d%d", &a, &b, &c);
	printf(" ‰»Î:%d %d %d\n", a, b, c);
	int i=1;
	for (i = i; i <= b; i++)
		x *= a;
	y = x % c;
	printf("%d\n", y);
	return 0;
}