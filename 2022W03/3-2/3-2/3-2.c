#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && b == c)
			printf("等边三角形");
		else if (a == b || b == c || a == c)
			printf("等腰三角形");
		else
			printf("普通三角形");
	}
	else 
	{
		printf("不能构成三角形");
	}
	return 0;
}

