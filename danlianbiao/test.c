#include "experiment.h"

int main() {
	LinkList *list = CreatList();
	Insert(list, 1, 10);
	Insert(list, 1, 20);
	Delete(list, 2);
	Insert(list, 1, 30);
	Insert(list, 1, 40);
	printf("链表的元素个数为：%d\n", Size(list));
	Print(list);
	printf("链表的第二个元素为：%d", GetData(list,2));
	printf("\n");
	int k = 0;
	Node *p, *q, *r;
	p = q = (Node*)malloc(sizeof(Node));
	p -> no = 1;
	for (int i=2; i<=n; i++) {
	    r = (Node*)malloc(sizeof(Node));
		r->no = i;
		q->next = r;
		q = r;
	}
	q->next = p;

	q = p;
	while (q->next != q) {
	   k++;
	   if (k == m) {
	      p->next = q->next;
		  free(q);
		  q = p->next;
		  k = 0;
	   } else {
	      p = q;
		  q = q->next;
	   }
	}
	printf("约瑟夫问题中有%d个人参加\n",n);
	printf("最后一个获胜者编号是：%d\n", q->no);
}

















