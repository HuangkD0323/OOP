#include "sort.h"
/*��������Ԫ�ص�ֵ*/
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/*�ָ��������ȷ������Ԫ�ص�����λ��*/
int partition(int arr[], int low, int high)
{
	int pivot = arr[low];	/*������ĵ�һ��Ԫ����Ϊ����*/
	int i = low + 1;		/*��ʼ����ָ��*/

	for (int j = low + 1; j <= high; j++)
	{
		if (arr[j] < pivot)
		{
			swap(&arr[i], &arr[j]);		/*����Ԫ�أ�����С��Ԫ�طŵ����*/
			i++;
		}
	}

	swap(&arr[low], &arr[i - 1]);		/*������Ԫ�طŵ�����λ��*/
	return (i - 1);						/*��������Ԫ�ص�����*/
}
/*����������*/
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pivotIndex = partition(arr, low, high);/*��ȡ����Ԫ�ص�����*/
		quickSort(arr, low, pivotIndex - 1);/*������������������п�������*/
		quickSort(arr, pivotIndex + 1, high);/*��������Ҳ���������п�������*/
	}
}
/*��ӡ����Ԫ��*/
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}