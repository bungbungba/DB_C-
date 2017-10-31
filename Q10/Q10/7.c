//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct booktype {
//	int serial_num;
//	char author[15];
//	char price[10];
//	struct booktype *next;
//} BOOK;
//
//BOOK *append(BOOK *list, BOOK *temp);
//BOOK *insert(BOOK *list, BOOK item);
//BOOK *delete(BOOK *list, int serial);
//void free_list(BOOK *head);
//void print_list(BOOK *head);
//
//
//void main()
//{
//	BOOK *list = NULL, *temp = NULL;
//	int menu, serial, serial_count = 1;
//
//	while (1)
//	{
//		printf("1. insert\n");
//		printf("2. delete\n");
//		printf("3. list\n");
//		printf("4. quit\n");
//
//		printf("\nEnter menu : ");
//		scanf("%d", &menu);
//	
//
//		switch (menu)
//		{
//		case 1:	
//			printf("\nEnter book information :\n\n");
//			temp = (BOOK*)malloc(sizeof(BOOK));
//			scanf("%s %s", temp->author, temp->price);
//			temp->serial_num = serial_count++;
//			temp->next = NULL;
//			list = append(list, temp);
//			break;
//		case 2: 
//			printf("Enter delete serial number :");
//			scanf("%d", &serial);
//			list = delete(list, serial);
//			break;
//		case 3: 
//			print_list(list);
//			break;
//		case 4: 
//			free_list(list);
//			return 0;
//		default: printf("\nEnter Error!!\n");
//		}
//		printf("\nPlease press any key to continue...\n");
//		system("pause");
//
//		system("cls");
//	
//	}
//}
//
//BOOK * append(BOOK * list, BOOK * temp)
//{
//	BOOK *current = list;
//	if (list == NULL) list = temp;
//	else {
//		while (current->next) current = current->next;
//		current->next = temp;
//	}
//	return list;
//}
//
//BOOK * insert(BOOK * list, BOOK item)
//{
//	BOOK *current = NULL, *follow = NULL, *newnode = NULL;
//	current = follow = list;
//
//	//make new node
//	if (!(newnode = (BOOK*)malloc(sizeof(BOOK))))
//	{
//		printf("No memory allocated...\n");
//		return NULL;
//	}
//	*newnode = item;
//
//	//move insert point
//	while ((current) && (current->serial_num < item.serial_num))
//	{
//		follow = current;
//		current = current->next;
//	}
//
//	//insert
//	newnode->next = current;
//	if (current == list) list = newnode; //first node
//	else follow->next = newnode; //middle or last node
//	
//	return list;
//}
//
//BOOK * delete(BOOK * list, int serial)
//{
//	BOOK *current, *follow, *newnode;
//
//	current = follow = list;
//	
//	//move delete point
//	while ((current) && (current->serial_num != serial))
//	{
//		follow = current;
//		current = current->next;
//	}
//
//	//if not found serial number
//	if (current == NULL)
//	{
//		printf("Serial is not found...\n");
//		return list;
//	}
//	
//	if (list == current) list = current->next; //delete first node
//	else if (!current->next) follow->next = NULL; //delete last node
//	else follow->next = current->next; //delete middle node
//
//	free(current);
//	return list;
//}
//
//void free_list(BOOK * head)
//{
//	if (!head)
//	{
//		free_list(head);
//		free(head);
//	}
//}
//
//void print_list(BOOK * head)
//{
//	BOOK *list = head;
//	while (list) 
//	{
//		printf("%3d %10s %10s\n", list->serial_num, list->author, list->price);
//		list = list->next;
//	}
//}
