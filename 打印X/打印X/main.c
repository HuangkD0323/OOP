#include <stdio.h>

int main()
{
	int n = 0;

	while (~scanf_s("%d",&n))
	{
		int  i = 0;
		//��ӡn��
		for (i = 0; i < n; i++)
		{
			int j = 0;
			//��ӡ��i�е�n��
			for (j = 0; j < n; j++)
			{
				//i��j��������Խ���
				//i+j����n-1�Ƿ��Խ���
				if (i == j || i + j == n - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
				
			}
			//��ӡ��һ�л���
			printf("\n");
		}
	}
	return 0;
}

/*�ջ��ܽ᣺���Խ������к�����ȵ���������Խ������к���֮�͵���������һ��
�����������һ�ֱ�ʾ����~scanf_s("%d",&n)*/