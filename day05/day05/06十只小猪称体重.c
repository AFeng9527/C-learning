#include<stdio.h>
int main06()
{
	int fits[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &fits[i]);
	}

	int max = fits[0];
	for (int i = 1; i < 10; i++)
	{
		if (max < fits[i])
		{
			max = fits[i];
		}
	}
	printf("���ص�С������Ϊ��%d\n", max);
	return 0;
}