#include <stdio.h>

int main()
{
	int n = 0;

	while (~scanf_s("%d",&n))
	{
		int  i = 0;
		//打印n行
		for (i = 0; i < n; i++)
		{
			int j = 0;
			//打印第i行的n列
			for (j = 0; j < n; j++)
			{
				//i和j相等是正对角线
				//i+j等于n-1是反对角线
				if (i == j || i + j == n - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
				
			}
			//打印完一列换行
			printf("\n");
		}
	}
	return 0;
}

/*收获总结：正对角线是行和列相等的情况，反对角线是行和列之和等于行数减一；
多组输入的另一种表示方法~scanf_s("%d",&n)*/