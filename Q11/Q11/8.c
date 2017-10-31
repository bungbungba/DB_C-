//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct tester
//{
//	int number;
//	char name[10];
//	int count;
//	char answer[6];
//	char answerOX[6];
//	int stand;
//	struct tester *next;
//}TESTER;
//
//TESTER * insert(TESTER *list, TESTER item, int * stand);
//void free_list(TESTER *head);
//void print_list(TESTER *head);
//
//int main()
//{
//	FILE *fp;
//	TESTER *head, *temp, *tail, item;
//	int stand = 1;
//
//	if ((fp = fopen("./data8.dat", "r")) == NULL)
//	{
//		printf("File Open Error!!\n");
//		exit(-1);
//	}
//	fseek(fp, 3, SEEK_SET); // TXT 파일이 UTF - 8 이라면  BOM을 없애기 위해 3byte 땅김
//
//	head = (TESTER*)malloc(sizeof(TESTER));
//
//	fscanf(fp, "%d", &item.number);
//	fscanf(fp, "%s", item.name);
//	fscanf(fp, "%s", item.answer);
//
//	head = &item;
//	head->stand = stand;
//	head->next = NULL;
//
//	head = insert(head, item, &stand);
//
//	while ((fscanf(fp, "%d %s %s", &item.number, item.name, item.answer)) != EOF)
//	{
//		head = insert(head, item, &stand);
//	}
//
//	temp = head;
//	tail = head -> next;
//	head->stand = stand;
//	stand++;
//
//	while (temp->next)
//	{
//		if (tail -> count == temp -> count) tail -> stand = temp -> stand;
//		else tail -> stand = stand;
//		tail = tail -> next;
//		temp = temp -> next;
//		stand++;
//	}
//
//
//	printf("%3s %10s %10s %10s %10s %s\n", "NO", "NAME", "ANSWER", "COUNT", "MARKS", "STAND");
//	printf(" ::\n");
//	print_list(head);
//
//	free_list(head);
//	return 0;
//}
//
//TESTER * insert(TESTER * list, TESTER item)
//{
//	TESTER *current = NULL, *follow = NULL, *newnode = NULL;
//	current = follow = list;
//	item.count = 0;
//	//make new node
//	if (!(newnode = (TESTER*)malloc(sizeof(TESTER))))
//	{
//		printf("No memory allocated...\n");
//		return NULL;
//	}
//
//	//Loading data file
//	int i, count = 0;
//	char correct[] = "13214";
//	for (i = 0; i < 5; i++)
//	{
//		if (correct[i] == item.answer[i])
//		{
//			count++;
//			item.answerOX[i] = 'o';
//		}
//		else
//			item.answerOX[i] = 'x';
//	}
//	item.answerOX[i] = '\0';
//	item.count = count;
//	*newnode = item;
//
//	//move insert point
//	while ((current) && (current->count > item.count))
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
//void free_list(TESTER * head)
//{
//	if (!head)
//	{
//		free_list(head->next);
//		free(head);
//	}
//}
//
//void print_list(TESTER * head)
//{
//	TESTER *list = head;
//	while (list->next)
//	{
//		printf("%3d %10s %10s %9d %11.1lf %5d\n",
//			list->number, list->name, list->answerOX, list->count, list->count * 20.0, list->stand);
//		list = list->next;
//	}
//}