//#include <stdio.h>
//
//void main()
//{
//	int floor, tf, count = 0, fc=0;
//	
//	while (1)
//	{
//		printf("�Է� : ");
//		scanf_s(" %d", &floor);
//		tf = floor;
//		if (floor == 3 || (floor % 9 != 0 && floor % 6 == 0))
//		{
//			for (int j = 1; j <= floor; j++) 
//			{
//				for (int i = 1; i < tf; i++)
//				{
//					printf(" ");
//					fc++;
//
//				}
//				if (floor == fc + 1)
//				{
//					tf++;
//				}
//
//				if (count % 3 == 0)
//				{
//					printf("*");
//				}
//				else if (count % 3 == 1)
//				{
//					printf("\b\b* *");
//				}
//				else if (count % 3 == 2)
//				{
//					printf("\b\b\b*****");
//				}
//
//				printf("\n");
//				count++;
//			}
//		}
//		else
//		{
//			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n\n");
//		}
//	}
//}