#include <stdio.h>
#include <stdlib.h>
#include "experiment.h"

LinkList* CreatList() {                                       //创建链表
	LinkList *head;
	head = (LinkList*)malloc(sizeof(LinkList));
	head->next = NULL;
	return head;
}

int Size(LinkList *list) {                                    //求链表的元素个数
	LinkList *p = list->next;
	int k = 0;
	while (p) {
		k++;
		p = p->next;
	}
	return k;
}

void Insert(LinkList *list, int k, dataType x) {              //在链表1的第k位置插入元素x
	if (k<1) exit(1);
	LinkList *p = list;
	int i = 0;
	while (p && i<k-1) {
		p = p->next;
		i++;
	}
	if (!p) exit (1);
	LinkList *s = (LinkList*)malloc(sizeof(LinkList));
	s->data = x;
	s->next = p->next;
	p->next = s;
}

void Delete(LinkList *list, int k) {                          //删除链表1的第k个元素
	if (k<1) exit (1);
	LinkList *p = list;
	int i = 0;
	while (p->next && i<k-1) {
		p = p->next;
		i++;
	}
	if (p->next==NULL) exit(1);
	LinkList *q = p->next;
	p->next = q->next;
	free(q);
}

int Empty(LinkList *list) {                                   //判断链表是否为空
	return list->next == NULL;
}

dataType GetData(LinkList *list, int k) {                     //求链表1的第k个元素的值
	if (k<1) exit (1);
	LinkList *p = list;
	int i = 0;
	while (p && i<k) {
		p = p->next;
		i++;
	}
	if (!p) exit(1);
	return p->data;
}

LinkList* Find(LinkList *list, dataType x) {                      //在链表1中查找值为x的元素
	LinkList *p = list->next;
	while (p && p->data!=x)
		p = p->next;
	return p;
}
								     
void Print(LinkList *list) {                               //输出链表
	LinkList *p = list->next;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

void ClearList (LinkList *list) {                             //清空链表
	LinkList *p, *q;
	p = list->next;
	while (p) {
		q = p;
		p = p->next;
		free(q);
	}
	list->next = NULL;
}





















