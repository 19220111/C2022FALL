#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && b == c)
			printf("�ȱ�������");
		else if (a == b || b == c || a == c)
			printf("����������");
		else
			printf("��ͨ������");
	}
	else 
	{
		printf("���ܹ���������");
	}
	return 0;
}
