#include<stdio.h>
#include<time.h>

int main()
{
	//�������������
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;//1-100
	int value;

	while (1)//for (; ;)
	{
		scanf("%d", &value);
		if (value>num)
		{
			printf("���������̫����\n");
		}
		else if (value < num)
		{
			printf("���������̫С��\n");
		}
		else
		{
			printf("��ϲ�㣡������ȷ��\n");
			break;
		}
	}
	return 0;
}