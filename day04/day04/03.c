#include <stdio.h>

int main03()
{
	int a=10;
	//sizeof()��������������ڴ���ռ�ֽڣ�Byte����С
	int len1 = sizeof(a);
	//�����ȸ�����
	float b = 3.14;
	//�ַ���
	char c = 'A';
	//˫���ȸ�����
	double d = 5.12;
	//������
	short e = 10;
	//������
	long f = 10;
	//��������
	long long g = 10;
	int len2 = sizeof(b);
	int len3 = sizeof(c);
	int len4 = sizeof(d);
	int len5 = sizeof(e);
	int len6 = sizeof(f);
	int len7 = sizeof(g);
	printf("a = %d\n", a);
	printf("int =%d\n", len1);
	printf("float =%d\n", len2);
	printf("char = %d\n", len3);
	printf("double = %d\n", len4);
	printf("short = %d\n", len5);
	printf("long = %d\n", len6);
	printf("long long = %d\n", len7);
	

	return 0;
}