#include <stdio.h>
#include <stdlib.h>
int maxSubArray(int* nums,int numSize)
{
	if (!nums || numSize == 0)
	{
		return 0;
	}
	int *dp = calloc(numSize,sizeof(int));//使用calloc分配内存并初始化为0
	if (!dp)
		return 0;
	if (nums[0] >= 0)
		dp[0] = nums[0];
	else
		dp[0] = 0;
	int max_sum = nums[0];
	for (int i = 1; i < numSize; i++)
	{
		dp[i] = (dp[i - 1] + nums[i] > nums[i]) ? dp[i - 1] + nums[i] : nums[i];
		max_sum = (dp[i] > max_sum) ? dp[i] : max_sum;
	}
	free(dp);
	return max_sum;
}

int mymain()
{
	int nums[] = { 3, - 4,5,12, - 6,9,4, - 7 };
	int numSize = sizeof(nums) / sizeof(nums[0]);
	int max_sum = maxSubArray(nums,numSize);
	printf("%d\n",max_sum);
}
