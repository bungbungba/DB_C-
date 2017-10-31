//#include <stdio.h>
//
//int gcd(int a, int b);//Great Common Divisor
//
//void main()
//{
//	int a, b, result;
//
//	do {
//		while (1)
//		{
//			printf("Enter the number1 : ");
//			scanf("%d", &a);
//			if (a < 0)
//			{
//				printf("Error\n");
//				continue;
//			}
//			else
//				break;
//		}
//		while (1)
//		{
//			printf("Enter the number2 : ");
//			scanf("%d", &b);
//			if (b < 0)
//			{
//				printf("Error\n");
//				continue;
//			}
//			else
//				break;
//		}
//		result = gcd(a, b);
//
//		printf("Great Common Divisor : %d\n\n", result);
//	} while (getch() != 'q');
//}
//
//int gcd(int a, int b)
//{
//	int i, result;
//	if (a > b)
//		i = b;
//	else
//		i = a;
//	for (int j = 1; j <= i; j++)
//	{
//		if (a % j == 0 && b % j == 0)
//		{
//			result = j;
//		}
//	}
//
//	return result;
//}