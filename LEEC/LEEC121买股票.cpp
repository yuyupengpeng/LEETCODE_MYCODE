//#include<vector>
//#include<iostream>
//using namespace std;
//
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        int min_price = 100000;
//        int max_profit = 0;
//        int temp;
//        for (int i = 0; i < n; ++i) {
//            if (prices[i] < min_price) {
//                min_price = prices[i];
//            }
//            temp = prices[i] - min_price;
//            if (temp > max_profit) {
//                max_profit = temp;
//            }
//            return max_profit;
//        }
//    };
//
//
//
//
//
//
//
//    }
//};