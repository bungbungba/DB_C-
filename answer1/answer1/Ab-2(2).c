//#include <stdio.h>
//
//void main()
//{
//	int floor, tf, count = 0, fc=0;
//	
//	while (1)
//	{
//		printf("입력 : ");
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
//			printf("잘못된 입력입니다. 다시 입력해주세요.\n\n");
//		}
//	}
//}