//#include <stdio.h>
//#include <stdlib.h>
//#include <process.h>
//#include <string.h>
//
//typedef struct node {
//	char name[15];
//	int age;
//	struct node *next;
//} NODE;
//
//void main()
//{
//	FILE *fp;
//	NODE *list, *temp;
//	list = temp = NULL;
//	int i, age, b = 1;
//	char name[15];
//
//	list = (NODE*)malloc(sizeof(NODE));
//
//	if ((fp = fopen("data2_2.dat", "r")) == NULL)
//	{
//		printf("File Open Error!\n");
//		exit(-1);
//	}
//	
//	list = (NODE*)malloc(sizeof(NODE));
//	temp = list;
//	
//	for (i = 0; i < 5; i++)
//	{
//		fscanf(fp, "%s %d", temp->name, &temp->age);
//		temp->next = (NODE*)malloc(sizeof(NODE));
//		temp = temp->next;
//	}
//	fclose(fp);
//
//	if ((fp = fopen("data2_1.dat", "r")) == NULL)
//	{
//		printf("File Open Error!\n");
//		exit(-1);
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		fscanf(fp, "%s %d", temp->name, &temp->age);
//		if (i != 4) temp->next = (NODE*)malloc(sizeof(NODE));
//		else temp->next = NULL;
//		temp = temp->next;
//	}
//	fclose(fp);
//
//	printf("Enter Name : ");
//	scanf("%s", name);
//
//	temp = list;
//	while (1)
//	{
//		if (!strcmp(name, temp->name)) break;
//		temp = temp->next;
//		if (!temp) break;
//	}
//
//	if (temp)
//	{
//		age = temp->age;
//		temp = list;
//
//		for (i = 0; i < 5; i++)
//		{
//			if (temp->age < age)
//			{
//				b = 0;
//				printf("%-15s%d\n", temp->name, temp->age);
//			}
//			temp = temp->next;
//		}
//	}
//	if (b) printf("Not Found\n");
//}