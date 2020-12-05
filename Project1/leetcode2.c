////#include<stdio.h>
////#include<stdlib.h>
////
////struct ListNode
////{
////	int elem;
////	ListNode* next;
////}L;
////
//////创建链表
////ListNode* initLink(int num[]) {
////	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
////	for (int i = 0; num[i] != 0; i++) {
////		ListNode *a= (ListNode*)malloc(sizeof(ListNode));
////		a->elem = num[i];
////		p->next = a;
////	}
////	return p;
////}
//////输出链表
////void print(ListNode* p) {
////	ListNode* temp = p;
////	while (temp->elem)
////	{
////		temp = temp->next;
////		printf("%d", temp->elem);
////	}
////}
////
////
//////int main(){
//////	int num1[] = { 2,4,3 };
//////	int num2[] = { 7,8,0 };
//////	ListNode* l1 = initLink(num1);
//////	print(l1);
//////
//////}
////
//////struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//////	int num1=0, num2=0;
//////	int ans;
//////	int aim;
//////	ListNode* returnListNode;
//////	ListNode *temp1 = l1;
//////	ListNode *temp2 = l2;
//////	ListNode* temp3 = returnListNode;
//////	while (temp1->next) {
//////		temp1 = temp1->next;
//////		num1 = 10*num1+temp1->elem;
//////	}
//////	while (temp2->next) {
//////		temp2 = temp2->next;
//////		num2 = 10 * num2 + temp2->elem;
//////	}
//////	ans = num1 + num2;
//////	
//////	do {
//////		aim = ans % 10;
//////		ListNode* a = (ListNode*)malloc(sizeof(ListNode));
//////		a->elem = aim;
//////		temp3->next = a;
//////		ans = ans / 10;
//////	} while (ans!=0);
//////	return returnListNode;
//////}
//
//#include<stdio.h>
//
//int main() {
//	int i;
//	char c;
//	for (i = 0; i < 5; i++) {
//		scanf_s("%d", &c);
//		printf("%d", c);
//	}
//	printf("\n");
//
//
//}