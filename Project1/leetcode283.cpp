//#include<stdio.h>
//
////void moveZeroes(int* nums, int numsSize) {
////	int temp;
////	for (int i = 0; i < numsSize-1; i++) {
////		for (int j = 1; j < numsSize; j++) {
////			if (nums[i] == 0) {
////				temp = nums[i];
////				nums[i] = nums[j];
////				nums[j] = nums[i];
////			}
////		}
////	}
////
////}
//void swap(int* a, int* b) {
//	int t = *a;
//	*a = *b, * b = t;
//}
//
//void moveZeroes(int* nums, int numsSize) {
//	int left = 0, right = 0;
//	while (right < numsSize) {
//		if (nums[right]) {
//			swap(nums + left, nums + right);
//			left++;
//		}
//		right++;
//	}
//}
////int main() {
////	int nums[] = { 0,1,0,3,12 };
////	int numsSize = 5;
////	int temp;
////	for (int j = 0; j < numsSize; j++) printf("%d ", nums[j]);
////	moveZeroes(nums, numsSize);
////	for (int j = 0; j < numsSize; j++)printf("%d ", nums[j]);
////	return 0;
////}