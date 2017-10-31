//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//typedef struct node {
//	int num;
//	struct node *next;
//}NODE;
//
//void main()
//{
//	NODE *list, *temp;
//	srand(time(NULL));
//	int i, num, count;
//
//	list = (NODE*)malloc(sizeof(NODE));
//	temp = list;
//	for (i = 0; i < 10; i++)
//	{
//		temp->num = rand() % 10;
//		temp->next = (NODE*)malloc(sizeof(NODE));
//		temp = temp->next;
//	}
//	temp->next = NULL;
//
//	while (1)
//	{
//		scanf("%d", &num);
//		if (num > 9) break;
//		count = 0;
//		temp = list;
//		while (temp->next)
//		{
//			if (temp->num == num) count++;
//			temp = temp->next;
//		}
//		printf("%d = %d\n", num, count);
//	}
//}