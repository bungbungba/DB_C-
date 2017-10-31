//#include <stdio.h>
//
//void Swap(int *x, int *y);
//
//void main()
//{
//	int iArray[] = { 75, 36, 79, 28, 45, 66, 57, 44 , 86 , 12 };
//	printf("a)\n");
//	for (int i = 1; i < sizeof(iArray) / 4; i++)
//	{
//		for (int j = 0; j < sizeof(iArray) / 4 - i; j++)
//		{
//			if (iArray[j] < iArray[j + 1])
//			{
//				Swap(&iArray[j], &iArray[j + 1]);
//			}
//		}
//	}
//	for (int i = 0; i < sizeof(iArray) / 4; i++)
//	{
//		printf("%d\n", iArray[i]);
//	}printf("\n\nb)\n");
//	for (int i = 1 ; i < sizeof(iArray) / 4; i++)
//	{
//		for (int j = 0; j < sizeof(iArray) / 4 - i; j++)
//		{
//			if (iArray[j] > iArray[j + 1])//여기 문제
//			{
//				Swap(&iArray[j], &iArray[j + 1]);
//			}
//		}
//	}
//	for (int i = 0; i < sizeof(iArray) / 4; i++)
//	{
//		printf("%d\n", iArray[i]);
//	}
//}
//
//void Swap(int *x, int *y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}