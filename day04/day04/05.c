#include <stdio.h>

int main05(void)
{

	//�з��ŵ�ȡֵ��Χ 32
	int a = 2147483647;
	a = a + 2;
	printf("%d\n", a);
	unsigned int b = 0;
	b = b - 1;
	printf("%u\n", b);
	return 0;
}