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
//	left = left->next->next; //��һ�����
//	right = right->next->next->next; //�ڶ������
//	compare = compare->next->next; //��һ�����
//	while (right->next) {
//		//��ͷָ�뿪ʼ�����ҵ���һ���������������
//		if (right->val > left->val) { 
//			right = right->next;
//			left = left->next;
//			continue; 
//		}
//		else {
//			compare = head->next->next; //��һ��Ԫ��
//			//�ҵ���������
//			while (compare->val < right->val)
//			{
//				compare = compare->next;
//			}
//			//������
//			struct ListNode* t =  (struct ListNode*)malloc(sizeof(struct ListNode));
//			t = right;
//			t->next = compare->next;
//			compare->next = t;
//			//ɾ�����
//			left->next = left->next->next;
//
//			
//		}
//	}
//	return head;
//}

