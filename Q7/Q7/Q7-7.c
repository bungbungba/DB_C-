//#include <stdio.h>
//int Sum(int x, int y);
//int Dsum(int x, int y);
//
//void main()
//{
//	int iArray[][3] = { { 35, 24, 67 },
//						{ 94, 12, 54 },
//						{ 66, 34, 71 } };
//	int jArray[][3] = { { 50, 63, 25 },
//						{ 48, 21, 88 },
//						{ 87, 16, 42 } };
//	int sum, dsum;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sum = Sum(iArray[i][j], jArray[i][j]);
//			printf("[%d][%d] + [%d][%d] = %d\t", i, j, i, j, sum);
//		}
//		printf("\n");
//	}
//
//	printf("\n\n");
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			dsum = Dsum(iArray[i][j], jArray[i][j]);
//			printf("[%d][%d] - [%d][%d] = %d\t", i, j, i, j, dsum);
//		}
//		printf("\n");
//	}
//
//}
//
//int Sum(int x, int y)
//{
//	return x + y;
//}
//int Dsum(int x, int y)
//{
//	return x - y;
//}