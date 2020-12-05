//
//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        vector<int>temp(nums1.begin(),nums1.begin()+ m);
//        int p1 = 0, p2 = 0, t = 0;
//   
//        while (p2<n&&t<m)
//        {
//            if (nums2[p2] < temp[t]) {
//                nums1[p1++] = nums2[p2++];
//            }
//            else {
//                nums1[p1++] = temp[t++];
//            }
//        
//        while(p2 == n && t<m) {
//            nums1[p1++]=temp[t++];
//        }
//        while (t==m && p2 < n) {
//            nums1[p1++]=nums2[p2++];
//        }
//        }
//        if (m == 0) {
//            nums1 = nums2;
//        }
//        if (n == 0) {
//            nums1 = nums1;
//        }
//    }
//};
//
//Solution s;
//
//int main() {
//    vector<int>nums1;
//    vector<int>nums2 = {1 };
//    int m = 0, n = 1;
//    s.merge(nums1, m, nums2, n);
//    for (int i = 0; i < nums1.size(); i++)
//    {
//        cout << nums1[i];
//    }
//}