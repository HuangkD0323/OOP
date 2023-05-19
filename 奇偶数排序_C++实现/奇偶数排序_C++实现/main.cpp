#include <iostream>
#include <vector>

void separateOddEven(std::vector<int> & nums)
{
	int  left = 0;
	int right = nums.size() - 1;
    while (left < right) {
        while (nums[left] % 2 != 0 && left < right) {
            left++;
        }
        while (nums[right] % 2 == 0 && left < right) {
            right--;
        }

        if (left < right) {
            std::swap(nums[left], nums[right]);
        }
    }
}

int main() {
    std::vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    separateOddEven(nums);

    std::cout << "Result: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}