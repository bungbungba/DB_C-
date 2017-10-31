//#include <stdio.h>
//
//long factorial(int number);
//
//void main()
//{
//	int num;
//	long fac1, fac2;
//
//	do
//	{
//		fac2 = 1;
//		printf("Enter the number : ");
//		scanf_s("%d", &num);
//
//		fac1 = factorial(num);
//		for (int i = 1; i <= num; i++)
//		{
//			fac2 *= i;
//		}
//
//		printf("%d factorial1 : %ld factorial2 : %ld\n\n", num, fac1 ,fac2);
//	} while (getch() != 'q');
//}
//
//long factorial(int number)
//{
//	if (number <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return number * factorial(number - 1);
//	}
//}