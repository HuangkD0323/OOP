#include "sort.h"
/*交换两个元素的值*/
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/*分割函数，用于确定枢轴元素的最终位置*/
int partition(int arr[], int low, int high)
{
	int pivot = arr[low];	/*将数组的第一个元素作为枢轴*/
	int i = low + 1;		/*初始化左指针*/

	for (int j = low + 1; j <= high; j++)
	{
		if (arr[j] < pivot)
		{
			swap(&arr[i], &arr[j]);		/*交换元素，将较小的元素放到左侧*/
			i++;
		}
	}

	swap(&arr[low], &arr[i - 1]);		/*将枢轴元素放到最终位置*/
	return (i - 1);						/*返回枢轴元素的索引*/
}
/*快速排序函数*/
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pivotIndex = partition(arr, low, high);/*获取枢轴元素的索引*/
		quickSort(arr, low, pivotIndex - 1);/*对枢轴的左侧子数组进行快速排序*/
		quickSort(arr, pivotIndex + 1, high);/*对枢轴的右侧子数组进行快速排序*/
	}
}
/*打印数组元素*/
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}