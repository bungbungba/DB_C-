//#include <stdio.h>
//
//void main()
//{
//	int count = 1,b;
//	while (count!=10000)
//	{
//		b = 0;
//		for (int i = 1; i <= 10000; i++)
//		{
//			int sum=0;
//			int tmp = i;
//			sum += tmp;
//			if (i > 1000)
//			{
//				sum += tmp / 1000;
//				tmp %= 1000;
//				sum += tmp / 100;
//				tmp %= 100;
//				sum += tmp / 10;
//				tmp %= 10;
//				sum += tmp;
//			}			
//			else if (i > 100)
//			{
//				sum += tmp / 100;
//				tmp %= 100;
//				sum += tmp / 10;
//				tmp %= 10;
//				sum += tmp;
//			}
//			else if (i > 10)
//			{
//				sum += tmp / 10;
//				tmp %= 10;
//				sum += tmp;
//			}
//			else
//			{
//				if (tmp % 10 == 0)
//				{
//					tmp /= 10;
//				}
//				else
//				{
//					tmp %= 10;
//				}
//				sum += tmp;
//			}
//			if (count == sum)
//			{
//				b++;
//			}
//		}
//		if (b == 0)
//		{
//			printf("%d\n", count);
//		}
//		count++;
//	}
//}