//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node {
//	char name[20];
//	char id[20];
//	int salary;
//	struct node *next;
//}NODE;
//
//
//void main()
//{
//	NODE *temp = NULL, *list = NULL;
//	int i;
//	double sum = 0;
//
//	list = (NODE *)malloc(sizeof(NODE));
//	temp = list;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%s", temp->name);
//		scanf("%s", temp->id);
//		scanf("%d", &temp->salary);
//		if (i != 4) {
//			temp->next = (NODE*)malloc(sizeof(NODE));
//			temp = temp->next;
//		}
//	}
//	temp->next = NULL;
//	temp = list;
//	for (i = 0; i < 5; i++)
//	{
//		sum += temp->salary;
//		temp = temp->next;
//	}
//	sum /= 5;
//
//	temp = list;
//	for (i = 0; i < 5; i++)
//	{
//		if (temp->salary >= sum)
//			printf("\n%-20s%-20s%10d\n", temp->name, temp->id, temp->salary);
//		temp = temp->next;
//	}
//}