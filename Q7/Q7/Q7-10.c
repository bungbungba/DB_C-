//#include <stdio.h>
//
//void main()
//{
//	int score[2][5] = { {76, 94, 48, 77, 85}, {88, 73, 90, 78, 67 }};
//	double engavg = 0, mathavg = 0, stuavg[5] = { 0 };
//
//	for (int i = 0; i < 2; i++)
//	{
//		if (i == 0)
//		{
//			printf("English\t");
//		}
//		else
//		{
//			printf("Math\t");
//		}
//
//		for (int j = 0; j < 5; j++)
//		{
//			if (i == 0)
//			{
//				engavg += score[i][j];
//			}
//			else
//			{
//				mathavg += score[i][j];
//			}
//			stuavg[j] += score[i][j];
//			printf("%d\t", score[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("===============================================\nAverage\t");
//
//	engavg /= 5;
//	mathavg /= 5;
//
//	for (int i = 0; i < 5; i++)
//	{
//		stuavg[i] /= 2;
//		printf("%.2lf\t", stuavg[i]);
//	}
//	printf("\n\n");
//
//	printf("English average : %.2lf\n", engavg);
//	printf("Math average : %.2lf\n", mathavg);
//}