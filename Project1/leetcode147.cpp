////#include<stdio.h>
////#include<stdlib.h>
////
////struct ListNode {
////	int val;
////	struct ListNode* next;
////};
//
//struct ListNode* insertionSortList(struct ListNode* head) {
//	struct ListNode* left = head; 
//	struct ListNode* right = head; 
//	struct ListNode* compare = head;
//	if (head == NULL || head->next == NULL) {
//		return head;
//	}
//	left = left->next->next; //第一个结点
//	right = right->next->next->next; //第二个结点
//	compare = compare->next->next; //第一个结点
//	while (right->next) {
//		//从头指针开始遍历找到第一个不符合排序的数
//		if (right->val > left->val) { 
//			right = right->next;
//			left = left->next;
//			continue; 
//		}
//		else {
//			compare = head->next->next; //第一个元素
//			//找到待排序结点
//			while (compare->val < right->val)
//			{
//				compare = compare->next;
//			}
//			//插入结点
//			struct ListNode* t =  (struct ListNode*)malloc(sizeof(struct ListNode));
//			t = right;
//			t->next = compare->next;
//			compare->next = t;
//			//删除结点
//			left->next = left->next->next;
//
//			
//		}
//	}
//	return head;
//}

