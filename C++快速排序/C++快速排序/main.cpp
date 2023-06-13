#include "sort.h"

int main()
{
	const int size = 20;
	int arr[size] = { 3,5,10,1,6,7,4,8,90,25,12,34,52,59,15,23,67,54,33,93 };
    printf("Original array: ");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    printf("Sorted array:   ");
    printArray(arr, size);

    return 0;
}