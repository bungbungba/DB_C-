//#include <stdio.h>
//
//char * insert_string(char statement[], char word[], int position);
//
//void main()
//{
//	char statement[60];
//	char * result;
//	char word[10];
//	int position;
//
//	printf("Enter the Statement : ");
//	gets(statement);
//	printf("Enter the word : ");
//	gets(word);
//	printf("Enter the position : ");
//	scanf("%d", &position);
//
//	result = insert_string(statement, word, position - 1);
//
//	printf("\nResult : %s\n", result);
//}
//
//char * insert_string(char statement[], char word[], int position)
//{
//	char string_temp[40];
//	strcpy(string_temp, statement + position); // position �ڿ� �ִ� ���ڿ� ����
//	strcpy(statement + position, word); // position�� ���ڿ� �Է�
//	strcat(statement, string_temp); // �Էµ� ���ڿ� + position �ڿ� �ִ� ���ڿ�
//
//	return statement;
//}