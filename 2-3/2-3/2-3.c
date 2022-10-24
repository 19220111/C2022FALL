#include<stdio.h>
#include<math.h>
int main()
{
	int x, a, b, c,y;
	scanf_s("%d %d %d %d", &x, &a, &b, &c);
	printf(" ‰»Î:%d %d %d %d\n", x, a, b, c);
	y = x * x * x + 2 * x * x + 3 * x + 1;
	printf("%d\n", y);
	printf("sqrt(fabs(x))!=%d\n", (4 * a )/( b * c));
	return 0;
}