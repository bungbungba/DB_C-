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
//	strcpy(string_temp, statement + position); // position 뒤에 있는 문자열 저장
//	strcpy(statement + position, word); // position에 문자열 입력
//	strcat(statement, string_temp); // 입력된 문자열 + position 뒤에 있던 문자열
//
//	return statement;
//}