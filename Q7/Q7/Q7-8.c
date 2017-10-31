//#include <stdio.h>
//
//void main()
//{
//	int iArray[][4] = { { 1, 2, 3, 4 },
//						{ 5 ,6 ,7 ,8 },
//						{ 9, 1, 2, 3 },
//						{ 4, 5, 6, 7 } };
//	int di = 3;
//
//	printf("original date\t\t90━ rotate\t\t180━ rotate\n");
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++) // original
//		{
//			printf("%d ", iArray[i][j]);
//		}
//
//		printf("\t\t");
//
//		for (int j = 3; j > -1; j--) // 90━
//		{
//			printf("%d ", iArray[j][i]);
//		}
//
//		printf("\t\t");
//
//		for (int j = 3; j > -1; j--) // 180━
//		{
//			printf("%d ", iArray[di][j]);
//		}
//		printf("\n");
//		di--;
//	}
//
//}