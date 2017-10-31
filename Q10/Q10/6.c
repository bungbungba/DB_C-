//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <process.h>
//
//typedef struct node {
//	int emp_num;
//	char name[15];
//	int age;
//	int salary;
//	struct node *next;
//} EMPLOYEE;
//
//EMPLOYEE * insert(EMPLOYEE * list, EMPLOYEE item);
//EMPLOYEE * delete(EMPLOYEE * list, int item);
//EMPLOYEE * append(EMPLOYEE * list, EMPLOYEE * temp);
//
//void main()
//{
//	FILE *fp;
//	EMPLOYEE *Master = NULL, *Hire = NULL, *temp1 = NULL, *temp2 = NULL;
//	int Retire[3], i, temp;
//
//	if ((fp = fopen("Hire.dat", "r+")) == NULL)
//	{
//		printf("File Open Error!\n");
//		exit(-1);
//	}
//
//	while (!feof(fp))
//	{	
//		temp2 = (EMPLOYEE*)malloc(sizeof(EMPLOYEE));
//		fscanf(fp, "%d %s %d %d", &temp2->emp_num, temp2->name, &temp2->age, &temp2->salary);
//		temp2->next = NULL;
//		Hire = append(Hire, temp2);
//	}
//
//
//	if ((fp = fopen("Retire.dat", "r+")) == NULL)
//	{
//		printf("File Open Error!\n");
//		exit(-1);
//	}
//	i = 0;
//	while (i<3)
//	{
//		fscanf(fp, "%d", &temp);
//		Retire[i++] = temp;
//	}
//	
//	if ((fp = fopen("Master.dat", "r+")) == NULL)
//	{
//		printf("File Open Error!\n");
//		exit(-1);
//	}
//
//	while (!feof(fp))
//	{	
//		temp1 = (EMPLOYEE*)malloc(sizeof(EMPLOYEE));
//		fscanf(fp, "%d %s %d %d", &temp1->emp_num, temp1->name, &temp1->age, &temp1->salary);
//		temp1->next = NULL;
//		Master = append(Master, temp1);
//	}	
//	fclose(fp);
//
//	
//	temp2 = Hire;
//	while (temp2)
//	{
//		Master = insert(Master, *temp2);
//		temp2 = temp2->next;
//	}
//
//	temp1 = Master;
//	while (temp1)
//	{
//		printf("%d %s %d %d\n", temp1->emp_num, temp1->name, temp1->age, temp1->salary);
//		temp1 = temp1->next;
//	}
//
//	i = 0;
//	while (i < 3) delete(Master, Retire[i++]);
//
//	printf("\n");
//	temp1 = Master;
//	while (temp1)
//	{
//		printf("%d %s %d %d\n", temp1->emp_num, temp1->name, temp1->age, temp1->salary);
//		temp1 = temp1->next;
//	}
//
//	if ((fp = fopen("Master.dat", "w")) == NULL)
//	{
//		printf("File Open Error!\n");
//		exit(-1);
//	}
//
//	temp1 = Master;
//	while (temp1)
//	{
//		fprintf(fp, "%d %10s %d %d\n", temp1->emp_num, temp1->name, temp1->age, temp1->salary);
//		temp1 = temp1->next;
//	}
//}
//EMPLOYEE * insert(EMPLOYEE * list, EMPLOYEE item)
//{
//	EMPLOYEE *current = NULL, *follow = NULL, *newnode = NULL;
//	current = follow = list;
//
//	if ((newnode = (EMPLOYEE *)malloc(sizeof(EMPLOYEE))) == NULL)
//	{
//		printf("No memory allocated..\n");
//		return NULL;
//	}
//	*newnode = item;
//
//
//	while ((current != NULL) && (current->emp_num < item.emp_num))
//	{	
//		printf("%d\n", current->emp_num);
//		follow = current;
//		current = current->next;
//	}
//	printf("\n");
//	newnode->next = current;
//
//	if (current == list) list = newnode; // first node
//	else follow->next = newnode; // middle or last node
//
//	return list;
//}
//
//EMPLOYEE * delete(EMPLOYEE * list, int item)
//{
//	EMPLOYEE *current, *follow, *newnode;
//
//	current = follow = list;
//	while ((current != NULL) && (current->emp_num != item))
//	{
//		follow = current;
//		current = current->next;
//	}
//
//	if (current == NULL)
//	{
//		printf("Item is not found...\n");
//		return list;
//	}
//	if (list == current) list = current->next; //first node del
//	else if (current->next == NULL) follow->next = NULL; //last node del
//	else follow->next = current->next; //middle node del
//
//	free(current);
//	return list;
//}
//
//EMPLOYEE * append(EMPLOYEE * list, EMPLOYEE * temp)
//{
//	EMPLOYEE * current = list;
//
//	if (!list) list = temp;
//	else
//	{
//		while (current->next)
//			current = current->next;
//		current->next = temp;
//	}
//	return list;
//}
