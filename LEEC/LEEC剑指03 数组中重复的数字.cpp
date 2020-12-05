//#include<vector>
//#include<iostream>
//using namespace std;
//
////±©Á¦
//class Solution {
//public:
//    int findRepeatNumber(vector<int>& nums) {
//		vector<int>temp = {nums[0]};
//		int t = 1;
//		for (int i = 0; i < nums.size()-1; i++) {
//			
//			if (nums[i+1]==nums[i]+1)
//			{
//				t++;
//			}
//		}
//		if (t == nums.size()) {
//			return -1;
//		}
//		for(int i = 1;i<nums.size();i++)
//		{
//			for (int j = 0;j<temp.size();j++)
//			{
//				if (nums[i] == temp[j]) {
//					return nums[i];
//				}
//			}
//			temp.push_back(nums[i]);
//		}
//		return -1;
//    }
//};
//Solution solution;
//int main() {
//	vector<int>nums = { 0, 1, 2, 3, 4, 11, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	
//	cout<< solution.findRepeatNumber(nums);
//	return 0;
//}