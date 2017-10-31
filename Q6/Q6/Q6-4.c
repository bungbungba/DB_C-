//#include <stdio.h>
//#define PI 3.14
//
//void get_radian(int degree, float *rad);
//
//void main()
//{
//	int degree;
//	float rad;
//	do
//	{
//		printf("Enter the degree : ");
//		scanf("%d", &degree);
//		if (degree > 360 || degree < 0)
//		{
//			printf("Error!!\n");
//			continue;
//		}
//		get_radian(degree, &rad);
//
//		printf("Radian : %.2f\n\n", rad);
//	} while (getch() != 'q');
//}
//
//void get_radian(int degree, float *rad)
//{
//	*rad = (double)degree / 180 * PI;
//}