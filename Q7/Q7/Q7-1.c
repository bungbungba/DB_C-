//#include <stdio.h>
//
//void main()
//{
//	int iArray[10], best = 0;
//	double avg = 0;
//
//	for (int i = 0; i < sizeof(iArray)/4; i++)
//	{
//		printf("Please enter a score : ");
//		scanf_s("%d", &iArray[i]);
//
//		if (best < iArray[i])
//		{
//			best = iArray[i];
//		}
//		avg += iArray[i];
//	}
//
//	avg /= 10;
//
//	printf("Average of score : %.2lf\n", avg);
//	printf("Best score : %d\n", best);
//}