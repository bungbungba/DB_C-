//#include <stdio.h>
//#include <stdlib.h>
//#define PI 3.14
//
//double Triangle();
//double Square();
//double Circle();
//double Rectangle();
//double Trapezoid();
//
//void main()
//{
//	int num;
//	double result;
//	while(1)
//	{
//		system("cls");
//		printf("1. Triangle\n");
//		printf("2. Square\n");
//		printf("3. Circle\n");
//		printf("4. Rectangle\n");
//		printf("5. Trapezoid\n");
//		printf("6. Quit\n");
//		printf("Please enter menu number : ");
//		scanf("%d", &num);
//		system("cls");
//		if (num == 1)
//		{
//			result = Triangle();
//		}
//		else if (num == 2)
//		{
//			result = Square();
//		}
//		else if (num == 3)
//		{
//			result = Circle();
//		}
//		else if (num == 4)
//		{
//			result = Rectangle();
//		}
//		else if (num == 5)
//		{
//			result = Trapezoid();
//		}
//		else if (num == 6)
//		{
//			printf("Quit this program\n");
//			break;
//		}
//		else
//		{
//			printf("Number Error !\n");
//			num = 0;
//		}
//		if (num != 0)
//		{
//			printf("\nThe area is %g square meter\n\n", result);
//		}
//		system("pause");
//	}
//}
//double Triangle()
//{
//	int bottom, height;
//
//	printf("Bottom : ");
//	scanf("%d", &bottom);
//	printf("Height : ");
//	scanf("%d", &height);
//
//	return bottom * height * 0.5;
//}
//double Square()
//{
//	int length;
//
//	printf("length : ");
//	scanf("%d", &length);
//
//	return length * length;
//}
//double Circle()
//{
//	int rad;
//
//	printf("Radian : ");
//	scanf("%d", &rad);
//
//	return rad * rad * PI;
//}
//double Rectangle()
//{
//	int bottom, height;
//
//	printf("Bottom : ");
//	scanf("%d", &bottom);
//	printf("Height : ");
//	scanf("%d", &height);
//
//	return bottom * height;
//}
//double Trapezoid()
//{
//	int bottom, height, top;
//
//	printf("Top : ");
//	scanf("%d", &top);
//	printf("Bottom : ");
//	scanf("%d", &bottom);
//	printf("Height : ");
//	scanf("%d", &height);
//
//	return (top + bottom) * height * 0.5;
//}