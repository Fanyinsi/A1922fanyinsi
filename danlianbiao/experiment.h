#ifndef experiment_h
#define experiment_h
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define n 11
#define m 3

typedef int dataType;
typedef struct node {
	        dataType data;
		        struct node *next;
}LinkList;                                               

typedef struct Node {
     int no;
	 struct Node *next;
	 }Node;

LinkList* CreatList(); 
int Size(LinkList *list);
void Insert(LinkList *list, int k, dataType x);
void Delete(LinkList *list, int k);
int Empty(LinkList *list);
dataType GetData(LinkList *list, int k);
LinkList* Find(LinkList *list, dataType x); 
void Print(LinkList *list);
void ClearList (LinkList *list); 
#endif














