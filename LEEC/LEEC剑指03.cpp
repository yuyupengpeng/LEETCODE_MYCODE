#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

//≈≈–Ú∫Û≤È÷ÿ
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		int i = 0;
		while (i<nums.size()-1)
		{
			if (nums[i] == nums[i + 1]) {
				return nums[i];
			}
			i++;
		}
		return -1;
    }
};
Solution solution;
int main() {
	vector<int>nums = { 0, 1, 2, 3, 4, 11, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	
	cout<< solution.findRepeatNumber(nums);
	return 0;
}