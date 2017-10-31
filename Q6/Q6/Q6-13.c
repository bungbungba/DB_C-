//#include <stdio.h>
//
//void sum_and_difference(int num1, int num2, int *sum, int *diff);
//
//void main()
//{
//	int num1, num2, sum, diff;
//	do
//	{
//		printf("Enter the data1 : ");
//		scanf("%d", &num1);
//
//		printf("Enter the data2 : ");
//		scanf("%d", &num2);
//
//		sum_and_difference(num1, num2, &sum, &diff);
//
//		printf("\nsum : %d\n\ndiffrernce : %d\n\n", sum, diff);
//	} while (getch() != 'q');
//}
//
//void sum_and_difference(int num1, int num2, int *sum, int *diff)
//{
//	*sum = num1 + num2;
//	*diff = num1 - num2;
//	if (*diff < 0)
//		*diff *= -1;
//}