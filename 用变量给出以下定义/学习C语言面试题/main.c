#include <stdio.h>

// 验证指向有10个整型数数组的指针
void validateIntArrayPointer() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int(*ptr)[10] = &arr;

	// 访问整型数组中的元素
	for (int i = 0; i < 10; i++) {
		printf("%d ", (*ptr)[i]);
	}
	printf("\n");
}

// 验证一个有10个指针的数组，指向整型数
void validatePointerArray() 
{
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;
	int num6 = 6, num7 = 7, num8 = 8, num9 = 9, num10 = 10;

	int* arr[10] = { &num1, &num2, &num3, &num4, &num5,
					&num6, &num7, &num8, &num9, &num10 };

	// 访问指针数组中的整型数
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr[i]));
	}
	printf("\n");
}

// 验证一个指向函数的指针，该函数有一个整型参数并返回一个整型数
int addOne(int num) 
{
	return num + 1;
}
// 验证一个有10个指针的数组，该指针指向一个函数，该函数有一个整型参数并返回一个整型数;
int addOne1(int num)
{
	return num + 1;
}

int subtractOne(int num) {
	return num - 1;
}

int main()
{
	// (1)调用验证指向有10个整型数数组的指针的函数
	validateIntArrayPointer();

	// (2)调用验证一个有10个指针的数组，指向整型数的函数
	validatePointerArray();

	// (3)验证一个指向函数的指针，该函数有一个整型参数并返回一个整型数
	int (*ptr)(int) = &addOne;  // 将指针指向 addOne 函数

	int result = (*ptr)(5);  // 通过指针调用函数
	printf("Result: %d\n", result);

	// (4)验证一个有10个指针的数组，该指针指向一个函数，该函数有一个整型参数并返回一个整型数

	int (*arr[10])(int) = { &addOne1, &subtractOne };  // 将数组元素指向相应的函数

	int result1 = arr[0](5);  // 通过数组元素指针调用函数
	printf("Result 1: %d\n", result1);

	int result2 = arr[1](5);
	printf("Result 2: %d\n", result2);

	return 0;
}