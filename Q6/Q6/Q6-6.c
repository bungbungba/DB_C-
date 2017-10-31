//#include <stdio.h>
//
//int calculate(char operator, int num1, int num2);
//
//void main()
//{
//	int num1, num2, sum;
//	char operator;
//
//	do
//	{
//		printf("Enter number1 : ");
//		scanf("%d", &num1);
//
//		printf("Enter operator : ");
//		scanf(" %c", &operator);
//
//		printf("Enter number2 : ");
//		scanf("%d", &num2);
//
//		sum = caulculate(operator, num1, num2);
//
//		printf("Result : %d\n\n", sum);
//	} while (getch() != 'q');
//}
//
//int caulculate(char operator, int num1, int num2)
//{
//	
//	switch (operator)
//	{
//		case '+': return num1 + num2;
//		case '-': return num1 - num2;
//		case '*': return num1 * num2;
//		case '/': return num1 / num2;
//		case '%': return num1 % num2;
//		default: printf("\nOperator Error!! \n\n");
//			return NULL;
//	}
//}