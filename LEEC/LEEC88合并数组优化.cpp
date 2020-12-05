//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int p1 = m - 1, p2 = n - 1, p = n + m - 1;
//
//        while (p2 > -1)
//        {
//            
//            if (p1 == -1) {
//                while (p2>-1)
//                {
//                 nums1[p--] = nums2[p2--];
//                }
//                break;
//            }
//            if (nums2[p2] >= nums1[p1]) {
//                nums1[p--] = nums2[p2--];
//            }
//            else
//            {
//                nums1[p--] = nums1[p1];
//                nums1[p1] = -10000;
//                p1--;
//            }
//
//        }
//    }
//};
//
//Solution s;
//
//int main() {
//    vector<int>nums1 = { 4,5,6,0,0,0 };
//    vector<int>nums2 = { 1,2,3 };
//    int m = 3, n = 3;
//    s.merge(nums1, m, nums2, n);
//    for (int i = 0; i < nums1.size(); i++)
//    {
//        cout << nums1[i];
//    }
//}