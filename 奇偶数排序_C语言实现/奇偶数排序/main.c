/*************************************************************************************
*问题：给定一个整数数组，请调整数组中数的顺序，
*      使得所有奇数位于数组的前半部分，所有偶数位于数组的后半部分 
*思路：
*要将数组中的奇数和偶数分开，可以使用双指针法来解决。双指针法使用两个指针，
*一个指向数组的开头，一个指向数组的末尾，然后交换它们指向的元素，直到两个指针相遇。
*以下是实现这个问题的思路：
*1.定义两个指针left和right，分别指向数组的开头和末尾。
*
*2.使用一个循环，不断移动left指针向右，同时移动right指针向左，直到两个指针相遇。
*
*3.在循环中，检查left指针指向的元素是否为偶数，检查right指针指向的元素是否为奇数。
*
*   如果left指针指向的元素是奇数，将left指针向右移动一步。
*   如果right指针指向的元素是偶数，将right指针向左移动一步。
*4.如果left指针指向的元素是偶数，right指针指向的元素是奇数，交换它们。
*
*5.重复步骤3和步骤4，直到left指针和right指针相遇。
*
*这样，当循环结束后，所有奇数都会位于数组的前半部分，所有偶数都会位于数组的后半部分。
*************************************************************************************/
#include <stdio.h>

/*交换两个整数的值*/

#define SWAP(x, y) do { \
    int temp = (x); \
    (x) = (y); \
    (y) = temp; \
} while (0)
/*void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}*/
/*将奇数和偶数分离开来的函数*/
void separateOddEven(int arr[], int size)
{
	int left = 0;/*数组的左边界索引*/
	int right = size - 1;/*数组的右边界索引*/
	while (left < right)
	{
		/*找到第一个偶数，移动左边界索引*/
		while (arr[left] % 2 != 0 && left < right)
		{ 
			left++;
		}
		/*找到第一个奇数，移到右边界索引*/
		while (arr[right] % 2 == 0 && left < right)
		{
			right--;
		}	
		/*交换左边界索引处的偶数和右边界索引处的奇数*/
		if (left < right)
		{
			/*swap(&arr[left], &arr[right]);*/
			SWAP(arr[left], arr[right]);
		}
	}	
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int size = sizeof(arr) / sizeof(arr[0]);

	separateOddEven(arr,size);

	printf("Result:");
	for (int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}