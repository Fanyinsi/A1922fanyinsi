#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "experiment3.h"

LinkStack* InitStack() {
	LinkStack *t = (LinkStack*)malloc(sizeof(LinkStack));
	t->next = NULL;
	return t;
}

int Empty(LinkStack *s) {
	return s->next == NULL;
}

void Push(LinkStack *s, dataType x) {
	LinkStack *t = (LinkStack*)malloc(sizeof(LinkStack));
	t->data = x;
	t->next = s->next;
	s->next = t;
}

void Pop(LinkStack *s) {
	if (Empty(s)) exit (1);
	LinkStack *p = s->next;
	s->next = p->next;
	free(p);
}

dataType GetTop(LinkStack *s) {
	return s->next->data;
}


















