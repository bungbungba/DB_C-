//#include <stdio.h>
//
//int sum1(int num);
//
//void main()
//{
//	int num, sum = 0;
//	do
//	{
//		sum = 0;
//		for (int i = 1; i <= 100; i++)//�ݺ������� 1~100
//		{
//			sum += i;
//		}
//
//		num = sum1(100);//����Լ��� 1~100
//
//		printf("%d\t%d\n\n", sum, num);
//	} while (getch() != 'q');
//}
//
//int sum1(int num)
//{
//	if (num <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return num + sum1(num - 1);
//	}
//}