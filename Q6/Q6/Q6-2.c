//#include <stdio.h>
//
//int calculate_sum(int num1, int num2);
//int read_num();
//
//
//void main()
//{
//	int first, second, sum;
//	
//	do
//	{
//		first = read_num();
//		second = read_num();
//		sum = calculate_sum(first, second);
//
//		printf("Answer : %d\n\n", sum);
//	} while (getch() != 'q');
//
//}
//
//int calculate_sum(int num1, int num2)
//{
//	int sum = 0,temp;
//	if (num1 > num2)
//	{
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	for (; num1 <= num2; num1++)
//	{
//		if (num1 % 2 == 0) sum += num1;
//	}
//	return sum;
//}
//
//int read_num()
//{
//	int i;
//	printf("Please enter a positive number : ");
//	scanf_s("%d", &i);
//	return i;
//}