#include<stdio.h>
int main04()
{
	int a, b, c;
	printf("��������ֻС������أ��Կո񽡸�����\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b)
	{
		if (a>c)
		{
			printf("%d\n", a);
		}
		else
		{
			printf("%d\n", c);
		}
	}
	else
	{
		if (b>c)
		{
			printf("%d\n", b);
		}
		else
		{
			printf("%d\n", c);
		}
	}

	return 0;
}