//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct NODE {
//	struct NODE *next;
//	int data;
//}NODE;
//
//void addLastNode(NODE *head, int data);
//void addNode(NODE *head, NODE *point);
//void delNode(NODE *head, NODE *node);
//void printNode(NODE *head);
//void printBackNode(NODE *head);
//
//int main()
//{
//	NODE *head = (NODE*)malloc(sizeof(NODE));
//	head->data = -1;
//	head->next = NULL;
//
//	addLastNode(head, 10);
//	addLastNode(head, 20);
//	addLastNode(head, 30);
//	addNode(head, head->next->next);
//	delNode(head, head->next);
//
//	printNode(head);
//	printf("\n");
//	printBackNode(head);
//	return 0;
//}
//
//void addLastNode(NODE * head, int data)
//{
//	NODE *temp = NULL;
//
//	temp = head;
//	if (!temp) { temp->data = data; temp->next = NULL; return 0; }
//	while (temp->next) temp = temp->next;
//	temp->next = (NODE*)malloc(sizeof(NODE));
//	temp = temp->next;
//	temp->data = data;
//	temp->next = NULL;
//}
//
//void addNode(NODE * head, NODE * point)
//{
//	NODE *current = NULL, *temp = NULL;
//	int data;
//	printf("Enter data : ");
//	scanf("%d", &data);
//
//	current = temp = head;
//	while (temp->next) 
//	{
//		if ((!point) && (!temp))
//		{
//			temp = (NODE*)malloc(sizeof(NODE));
//			temp->data = data;
//			temp->next = NULL;
//			break;
//		}
//		else if ((!point) && (point == temp->next))
//		{
//			temp->next = (NODE*)malloc(sizeof(NODE));
//			temp = temp->next;
//			temp->data = data;
//			temp->next = NULL;
//			break;
//		}
//		else if (point == temp->next)
//		{
//			current = (NODE*)malloc(sizeof(NODE));
//			current->data = data;
//			current->next = temp->next;
//			temp->next = current;
//			break;
//		}
//		temp = temp->next;
//	}
//	
//
//}
//
//void delNode(NODE * head, NODE * node)
//{
//	NODE *first = NULL, *second = NULL;
//	int b = 1;
//	first = second = head;
//	if (second == node) { head = first->next; b = 0; }
//	
//	if (b)
//	{
//		while (1)
//		{
//			first = second;
//			second = second->next;
//			if (first->next == node) break;
//			if (!second) return 0;
//		}
//		first->next = second->next;
//	}
//	free(second);
//}
//
//void printNode(NODE * head)
//{
//	NODE *temp;
//
//	temp = head;
//
//	while (temp)
//	{
//		printf("%d\n", temp->data);
//		temp = temp->next;
//	}
//}
//
//void printBackNode(NODE * head)
//{
//	if (!head) return 0;
//	while (head)
//	{
//		printBackNode(head->next);
//		printf("%d\n", head->data);
//		return 0;
//	}
//}
