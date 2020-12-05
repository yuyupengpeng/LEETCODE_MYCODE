//#include<stdio.h>
//#include <stdlib.h>
//
////链表结构体
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//
////创建链表，从数组中获得数据创建链表
//struct ListNode* creatList(int *num,int lenght) {
//	struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode)); //创建头结点
//	struct ListNode* temp = p;//temp头头指针用来遍历链表
//	p->val = num[0];
//	for (int i = 1; i < lenght; i++) { //循环数组长度次
//		temp->next = (struct ListNode*)malloc(sizeof(struct ListNode)); //创建新的结点
//		temp = temp->next;
//		temp->val = num[i]; //新的结点连上了，给新结点数值域赋值
//		
//	}
//	temp->next = NULL;
//	return p; //返回创建好的新指针
//}
//struct ListNode* insertionSortList(struct ListNode* head) {
//    //head == null
//    if (head == NULL || head->next == NULL)
//        return head;
//    struct ListNode* head_tmp = head;
//    struct ListNode* sore_back = head;
//    struct ListNode* pointer_compare = head->next;
//    struct ListNode* prev = NULL;
//    struct ListNode* prev_compare = head;
//    while (pointer_compare->next) {
//        if (pointer_compare->val < sore_back->val) {
//            while (!(pointer_compare == head_tmp)) {
//                if (pointer_compare->val > head_tmp->val) {
//                    prev = head_tmp;
//                    head_tmp = head_tmp->next;
//                    continue;
//                }
//                else {
//                    prev_compare->next = pointer_compare->next;
//                    pointer_compare->next = head_tmp;
//                    prev->next = pointer_compare;
//                    break;
//                }
//            }
//        }
//        else {
//            sore_back = sore_back->next;
//            pointer_compare = pointer_compare->next;
//        }
//        prev_compare->next = pointer_compare;
//        pointer_compare = pointer_compare->next;
//    }
//    return head;
//}
//
////打印链表
////void display(link* p) {
////	link* temp = p;//temp头头指针用来遍历链表
////	while (temp->next)
////	{
////		temp = temp->next;
////		printf("%d", temp->elem);
////	}
////
//
//int main() {
//
//
//	int i = 0;
//	int a[20];
//	for (i = 0; i < 20; ++i) {
//		a[i] = rand();
//	}
//	struct ListNode* t = creatList(a,20);
//	insertionSortList(t);
//}
//
//
//
//
//
