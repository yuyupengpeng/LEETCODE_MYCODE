////#include<vector>
////#include<algorithm>
////#include<iostream>
////using namespace std;
////
////class Solution {
////public:
////    int maxProfit(vector<int>& prices) {
////        int max_profit = 0, min_price = 100000;
////        int temp = 0;
////
////        int r = 0;
////        while (r < prices.size()-1)
////        {
////            for (int i = 0; i < prices.size() - 1; i++) {
////                if (prices[i] < prices[i + 1]) {
////                    min_price = prices[i];
////                    break;
////                }
////                else
////                {
////                    r++;
////                }
////            }
////            for (int i = r; i < prices.size(); i++) {
////                if (prices[i] > prices[i + 1]) {
////                    temp = prices[i];
////                    r++;
////                }
////                max_profit = max_profit + temp;
////            }
////        }
////        return max_profit;
////    }
////};
////
////Solution solution;
////int main() {
////    vector<int>prices = { 7,1,5,3,6,4 };
////    cout<< solution.maxProfit(prices);
////
////    return 0;
////}
//
//
//#include<stdio.h>
//int maxProfit(int* prices, int pricesSize) {
//	int max_profit = 0, min_price = 100000;
//	int temp = 0;
//	int r = 0;
//	int i = 1;
//	while (i<pricesSize-1)
//	{
//		while (i < pricesSize - 1)
//		{
//			if (prices[i] < prices[i + 1] && prices[i] < prices[i - 1]) {
//				min_price = prices[i];
//				r = i;
//				break;
//			}
//		}
//		i = r;
//		while (i<pricesSize-1)
//		{
//			if (prices[i] < prices[i + 1]) {
//				temp = prices[i + 1];
//			}
//			else
//			{
//				temp = prices[i];
//			}
//		}
//		max_profit = max_profit + temp;
//	}
//
//	return max_profit;
//
//}