//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node
//{
//	struct node *next;
//	int data;
//}NODE;
//
//void addFirst(NODE *target, int data);
//NODE *FindNode(struct NODE *node, int data);
//
//void main()
//{
//	NODE *head = (NODE*)malloc(sizeof(NODE));
//	head->next = NULL;
//
//	addFirst(head, 10);
//	addFirst(head, 20);
//	addFirst(head, 30);
//
//	NODE *found = FindNode(head, 20);
//	printf("%d\n", found->data);
//
//	NODE *curr = head->next;
//	while (curr != NULL)
//	{
//		NODE *next = curr->next;
//		free(curr);
//		curr = next;
//	}
//	free(head);
//}
//
//void addFirst(NODE * target, int data)
//{
//	NODE *newNode = (NODE*)malloc(sizeof(NODE));
//	newNode->next = target->next;
//	newNode->data = data;
//	
//	target->next = newNode;
//}
//
//NODE * FindNode(NODE * node, int data)
//{
//	NODE *find;
//
//	find = node;
//	while (find)
//	{
//		if(find->data == data)	return find;
//
//		find = find->next;
//	}
//
//	return NULL;
//}
