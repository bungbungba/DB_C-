//#include <stdio.h>
//float getAverage(int *Array, int SIZE);
//
//void main()
//{
//	int array[5];
//	float avg;
//
//	for (int i = 0 ; i < sizeof(array) / 4; i++)
//	{
//		printf("please enter a integer : ");
//		scanf("%d", &array[i]);
//	}
//	avg = getAverage(array, sizeof(array) / 4);
//
//	printf("average : %.2f\n", avg);
//}
//
//float getAverage(int *Array, int SIZE)
//{
//	float avg = 0;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		avg += Array[i];
//	}
//	
//	return avg/SIZE;
//}