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
//	NODE *teenage, *twentys, *thirtys, *temp1, *temp2, *temp3;
//	teenage = twentys = thirtys = temp1 = temp2 = temp3 = NULL;
//	char name[15];
//	int age;
//	int i;
//
//	if ((fp = fopen("data3.dat", "r")) == NULL)
//	{
//		printf("File Open Error!\n");
//		exit(-1);
//	}
//	teenage = (NODE*)malloc(sizeof(NODE));
//	twentys = (NODE*)malloc(sizeof(NODE));
//	thirtys = (NODE*)malloc(sizeof(NODE));
//	temp1 = teenage;
//	temp2 = twentys;
//	temp3 = thirtys;
//	
//	for (i = 0; i < 15; i++)
//	{
//		fscanf(fp, "%s %d", name, &age);
//		if (age >= 30)
//		{
//			strcpy(temp3->name, name);
//			temp3->age = age;
//			temp3->next = (NODE*)malloc(sizeof(NODE));
//			temp3 = temp3->next;
//		}
//		else if (age >= 20)
//		{
//			strcpy(temp2->name, name);
//			temp2->age = age;
//			temp2->next = (NODE*)malloc(sizeof(NODE));
//			temp2 = temp2->next;
//		}
//		else if (age >= 10)
//		{
//			strcpy(temp1->name, name);
//			temp1->age = age;
//			temp1->next = (NODE*)malloc(sizeof(NODE));
//			temp1 = temp1->next;
//		}
//	}
//	
//	fclose(fp);
//	
//	temp1->next = NULL;
//	temp2->next = NULL;
//	temp3->next = NULL;
//
//	printf("Teenage\n");
//	temp1 = teenage;
//	while (temp1->next)
//	{
//		printf("%10s %d\n", temp1->name, temp1->age);
//		temp1 = temp1->next;
//	}
//	printf("\nTwentys\n");
//	temp2 = twentys;
//	while (temp2->next)
//	{
//		printf("%10s %d\n", temp2->name, temp2->age);
//		temp2 = temp2->next;
//	}
//	printf("\nThirtys\n");
//	temp3 = thirtys;
//	while (temp3->next)
//	{
//		printf("%10s %d\n", temp3->name, temp3->age);
//		temp3 = temp3->next;
//	}
//
//}