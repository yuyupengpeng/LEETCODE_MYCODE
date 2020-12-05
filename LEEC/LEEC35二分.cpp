//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int n = nums.size();    //数组长度
//        int left = 0, right = n - 1;
//        int mid;
//        while (left <= right)
//        {
//            mid = ((left - right) >> 1) + left;
//            if (target <= nums[mid]) {
//                right = mid - 1;
//            }
//            else
//            {
//                left = mid + 1;
//            }
//        }
//        return left;
//    }
//};
//
//Solution solution;
//int main() {
//    
//
//
//    return 0;
//}