#ifndef experiment3_h
#define experiment3_h
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
}LinkStack;

LinkStack* InitStack();
int Empty(LinkStack *s);
void Push(LinkStack *s, dataType x);
void Pop(LinkStack *s);
dataType GetTop(LinkStack *s);

#endif

