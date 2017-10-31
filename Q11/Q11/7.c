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
//BOOK * Insert(BOOK * tail, BOOK item); // 연결리스트 데이터 추가 @parm : 값을 추가할 리스트 @ 값을 추가할 노드
//void Delete(BOOK * head, int item); // 연결리스트 데이터 삭제 @parm : 값을 삭제할 리스트 @ 값을 찾을 데이터
//void Print_List(BOOK * head); // 연결리스트 출력
//void Free_List(BOOK * head); // 연결리스트 동적할당 모두 해제
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
//	//fseek(fp, 3, SEEK_SET); // 파일이 UTF - 8 이라면  BOM을 없애기 위해 3byte 땅김
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
//		//메뉴 출력
//		printf("1. insert(추가)\n");
//		printf("2. delete(삭제)\n");
//		printf("3. list(출력)\n");
//		printf("4. quit(나가기)\n");
//
//		//메뉴 선택
//		printf("menu : ");
//		scanf("%d", &menu);
//
//		system("cls"); // 화면정리
//
//		switch (menu)
//		{
//		case 1: // 입력시 값을 받고 함수 실행
//			scanf("%s %s", book.author, book.price);
//			book.serial_num = ++serial;
//			tail = Insert(tail, book);
//			break;
//		case 2:  // 삭제시 serial_number를 찾을 값을 받고 함수 실행
//			printf("Enter delete serial_number : ");
//			scanf("%d", &number);
//			Delete(head, number);
//			break;
//		case 3: // 함수 실행으로 출력
//			Print_List(head);
//			break;
//		case 4: // 종료시 기록을 하고 종료
//			if ((fp = fopen("data7.dat", "w")) == NULL)
//			{
//				printf("File Open Error...!!\n");
//				exit(-1);
//			}
//
//			//파일에 값 입력
//			tail = head;
//			while (tail->next != NULL)
//			{
//				fprintf(fp, "%d %s %s\n", tail->serial_num, tail->author, tail->price);
//				tail = tail->next;
//			}
//
//			//모두해제 + 종료
//			fclose(fp);
//			Free_List(head);
//			return 0;
//		default :
//			printf("wrong enter menu..\n");
//		}
//		
//		//마지막 마무리
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
