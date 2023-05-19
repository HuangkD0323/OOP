#include <stdio.h>

// ��ָ֤����10�������������ָ��
void validateIntArrayPointer() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int(*ptr)[10] = &arr;

	// �������������е�Ԫ��
	for (int i = 0; i < 10; i++) {
		printf("%d ", (*ptr)[i]);
	}
	printf("\n");
}

// ��֤һ����10��ָ������飬ָ��������
void validatePointerArray() 
{
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;
	int num6 = 6, num7 = 7, num8 = 8, num9 = 9, num10 = 10;

	int* arr[10] = { &num1, &num2, &num3, &num4, &num5,
					&num6, &num7, &num8, &num9, &num10 };

	// ����ָ�������е�������
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr[i]));
	}
	printf("\n");
}

// ��֤һ��ָ������ָ�룬�ú�����һ�����Ͳ���������һ��������
int addOne(int num) 
{
	return num + 1;
}
// ��֤һ����10��ָ������飬��ָ��ָ��һ���������ú�����һ�����Ͳ���������һ��������;
int addOne1(int num)
{
	return num + 1;
}

int subtractOne(int num) {
	return num - 1;
}

int main()
{
	// (1)������ָ֤����10�������������ָ��ĺ���
	validateIntArrayPointer();

	// (2)������֤һ����10��ָ������飬ָ���������ĺ���
	validatePointerArray();

	// (3)��֤һ��ָ������ָ�룬�ú�����һ�����Ͳ���������һ��������
	int (*ptr)(int) = &addOne;  // ��ָ��ָ�� addOne ����

	int result = (*ptr)(5);  // ͨ��ָ����ú���
	printf("Result: %d\n", result);

	// (4)��֤һ����10��ָ������飬��ָ��ָ��һ���������ú�����һ�����Ͳ���������һ��������

	int (*arr[10])(int) = { &addOne1, &subtractOne };  // ������Ԫ��ָ����Ӧ�ĺ���

	int result1 = arr[0](5);  // ͨ������Ԫ��ָ����ú���
	printf("Result 1: %d\n", result1);

	int result2 = arr[1](5);
	printf("Result 2: %d\n", result2);

	return 0;
}