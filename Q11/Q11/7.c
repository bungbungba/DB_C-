//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct booktype {
//	int serial_num;
//	char author[15];
//	char price[10];
//	struct booktype * next;
//}BOOK;
//
//BOOK * Insert(BOOK * tail, BOOK item); // ���Ḯ��Ʈ ������ �߰� @parm : ���� �߰��� ����Ʈ @ ���� �߰��� ���
//void Delete(BOOK * head, int item); // ���Ḯ��Ʈ ������ ���� @parm : ���� ������ ����Ʈ @ ���� ã�� ������
//void Print_List(BOOK * head); // ���Ḯ��Ʈ ���
//void Free_List(BOOK * head); // ���Ḯ��Ʈ �����Ҵ� ��� ����
//
//int main()
//{
//	FILE *fp;
//	int menu, number, serial = 0, data;
//	BOOK *head, *tail, book;
//
//	head = (BOOK*)malloc(sizeof(BOOK));
//
//	tail = head;
//	if ((fp = fopen("data7.dat", "r")) == NULL)
//	{
//		printf("File Open Error...!!\n");
//		exit(-1);
//	}
//
//	//fseek(fp, 3, SEEK_SET); // ������ UTF - 8 �̶��  BOM�� ���ֱ� ���� 3byte ����
//
//	while ((data = fscanf(fp, "%d %s %s", &tail->serial_num, tail->author, tail->price)) != EOF)
//	{
//		serial = tail->serial_num;
//		tail->next = (BOOK*)malloc(sizeof(BOOK));
//		tail = tail->next;
//	}
//	fclose(fp);
//	tail->next = NULL;
//
//	while(1)
//	{   	
//		//�޴� ���
//		printf("1. insert(�߰�)\n");
//		printf("2. delete(����)\n");
//		printf("3. list(���)\n");
//		printf("4. quit(������)\n");
//
//		//�޴� ����
//		printf("menu : ");
//		scanf("%d", &menu);
//
//		system("cls"); // ȭ������
//
//		switch (menu)
//		{
//		case 1: // �Է½� ���� �ް� �Լ� ����
//			scanf("%s %s", book.author, book.price);
//			book.serial_num = ++serial;
//			tail = Insert(tail, book);
//			break;
//		case 2:  // ������ serial_number�� ã�� ���� �ް� �Լ� ����
//			printf("Enter delete serial_number : ");
//			scanf("%d", &number);
//			Delete(head, number);
//			break;
//		case 3: // �Լ� �������� ���
//			Print_List(head);
//			break;
//		case 4: // ����� ����� �ϰ� ����
//			if ((fp = fopen("data7.dat", "w")) == NULL)
//			{
//				printf("File Open Error...!!\n");
//				exit(-1);
//			}
//
//			//���Ͽ� �� �Է�
//			tail = head;
//			while (tail->next != NULL)
//			{
//				fprintf(fp, "%d %s %s\n", tail->serial_num, tail->author, tail->price);
//				tail = tail->next;
//			}
//
//			//������� + ����
//			fclose(fp);
//			Free_List(head);
//			return 0;
//		default :
//			printf("wrong enter menu..\n");
//		}
//		
//		//������ ������
//		printf("Please Enter any Key..");
//		getch();
//		system("cls");
//	}
//	return 0;
//}
//
//BOOK * Insert(BOOK * tail, BOOK item)
//{
//	tail->serial_num = item.serial_num;
//	strcpy(tail->author, item.author);
//	strcpy(tail->price, item.price);
//	
//	tail->next = (BOOK*)malloc(sizeof(BOOK));
//	tail = tail->next;
//	tail->next = NULL;
//
//	return tail;
//}
//
//void Delete(BOOK * head, int item)
//{
//	BOOK *follow, *current;
//	follow = current = head;
//	while (current->next != NULL && current != NULL)
//	{	
//		if (current->serial_num == item)
//		{
//			follow->next = current->next;
//			free(current);
//			break;
//		}
//		follow = current;
//		current = current->next;
//	}
//	
//}
//
//void Print_List(BOOK * head)
//{
//	BOOK * temp = head;
//
//	while (temp->next != NULL)
//	{
//		printf("%3d %15s %10s\n", temp->serial_num, temp->author, temp->price);
//		temp = temp->next;
//	}
//}
//
//void Free_List(BOOK * head)
//{
//	if (head->next == NULL)
//	{	
//		free(head);
//		return 0;
//	}
//	Free_List(head->next);
//	
//	free(head);
//}
