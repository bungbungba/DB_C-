//#include <stdio.h>
//
//int myGCD(int num1, int num2);
//
//void main()
//{
//	int A = myGCD(100, 120);
//	printf("%d\n", A);
//}
//
//int myGCD(int num1, int num2)
//{
//	int tmp;
//	if (num1%num2 != 0)
//	{
//		tmp = num1%num2;
//		num1 = num2;
//		num2 = tmp;
//		return myGCD(num1, num2);
//	}
//	else
//	{
//		return num2;
//	}
//}