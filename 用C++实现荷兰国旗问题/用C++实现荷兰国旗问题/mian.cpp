#include <iostream>
#include <vector>

using namespace std;

void swap(int& a,int & b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sortColors(vector<int>& nums) {
    int p0 = 0;  // 指向红球的指针
    int p1 = 0;  // 指向白球的指针
    int p2 = nums.size() - 1;  // 指向蓝球的指针

    while (p1 <= p2) {
        if (nums[p1] == 0) {
            swap(nums[p0], nums[p1]);
            p0++;
            p1++;
        }
        else if (nums[p1] == 1) {
            p1++;
        }
        else {
            swap(nums[p1], nums[p2]);
            p2--;
        }
    }
}

int main()
{
    vector<int> nums = { 2, 0, 2, 1, 1, 0 };

    cout << "Before sorting:";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i < nums.size() - 1) 
        {
            cout << " ";
        }
    }

    cout << endl;

    sortColors(nums);

    cout << "After sorting:";

    for (int i = 0; i < nums.size(); i++) 
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}