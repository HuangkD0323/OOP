/***********************************************************************************************************************************
*    @question: 有n个红白蓝三种不同颜色的小球，乱序排列在一起，请通过两两交换任意两个球，使得从左至右的球依次为红球，白球，蓝球。
*			    这个问题之所以叫荷兰国旗，是因为红白蓝三色的小球弄成条状物，并有序排列后正好组成荷兰国旗
*************************************************************************************************************************************/

/************************************************************************************************************************************
*    思想：使用三个指针来进行遍历和交换操作。假设有三个指针：p0，p1和p2，初始时它们分别指向数组的起始位置、第一个位置和最后一个位置。

	 首先，将p0和p2分别初始化为数组的起始位置和最后一个位置。然后，从头开始遍历数组，用一个指针i依次检查每个元素：

	 如果nums[i]等于0，表示该元素为红球，将其与p0指针所指向的位置交换，并将p0和i指针都向后移动一位。
	 如果nums[i]等于1，表示该元素为白球，将其保留在原地，只将i指针向后移动一位。
	 如果nums[i]等于2，表示该元素为蓝球，将其与p2指针所指向的位置交换，并将p2指针向前移动一位。
	 但此时i指针不能移动，因为交换过来的元素还需要进一步检查。
	 这个过程会不断地将0交换到数组的左侧，将2交换到数组的右侧，而1会自动排列在中间位置。
	 当i指针超过p2指针时，交换操作结束，此时数组中的元素就按照红白蓝的顺序排列。
*************************************************************************************************************************************/

#include <stdio.h>

// 交换两个元素的值
void swap(int* a , int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
// 解决荷兰国旗问题的函数
void sortColors(int nums[], int numsize)
{
	int p0 = 0;// 指向红球的指针
	int p1 = 0;// 指向白球的指针
	int p2 = numsize - 1;// 指向蓝球的指针

	while (p1 < p2)
	{
		if (nums[p1] == 0)
		{
			swap(&nums[p0],&nums[p1]);// 将红球交换到左侧
			p0++;// 红球指针向后移动
			p1++;// 白球指针向后移动
		}
		else if (nums[p1] ==1)
		{
			p1++;// 白球保持不动，指针向后移动
		}
		else
		{
			swap(&nums[p1],&nums[p2]);// 将蓝球交换到右侧
			p2--; // 蓝球指针向前移动
		}
	}
}
int main()
{
	int nums[] = { 2,0,2,1,1,0 };
	int numsize = sizeof(nums) / sizeof(nums[0]);

	printf("Before sorting: ");
	for (int i = 0; i < numsize; i++) {
		printf("%d ", nums[i]);
	}

	printf("\n");

	sortColors(nums, numsize);

	printf("After sorting:");

	for (int i = 0; i < numsize; i++)
	{
		printf(" %d",nums[i]);
	}

	printf("\n");

	return 0;

}























