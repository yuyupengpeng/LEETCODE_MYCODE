//#include<stdio.h>
//#include <stdlib.h>
//
////����ṹ��
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//
////���������������л�����ݴ�������
//struct ListNode* creatList(int *num,int lenght) {
//	struct ListNode* p = (struct ListNode*)malloc(sizeof(struct ListNode)); //����ͷ���
//	struct ListNode* temp = p;//tempͷͷָ��������������
//	p->val = num[0];
//	for (int i = 1; i < lenght; i++) { //ѭ�����鳤�ȴ�
//		temp->next = (struct ListNode*)malloc(sizeof(struct ListNode)); //�����µĽ��
//		temp = temp->next;
//		temp->val = num[i]; //�µĽ�������ˣ����½����ֵ��ֵ
//		
//	}
//	temp->next = NULL;
//	return p; //���ش����õ���ָ��
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
////��ӡ����
////void display(link* p) {
////	link* temp = p;//tempͷͷָ��������������
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
