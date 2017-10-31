//#include <stdio.h>
//
//void main()
//{
//
//	int floor, count = 0, addStar;
//
//	while (1)
//	{
//		printf("입력 : ");
//		scanf_s(" %d", &floor);
//		
//		if (floor == 3 || (floor % 9 != 0 && floor % 6 == 0))//숫자 판독
//		{
//			for (int i = floor; i >= 1; i--) // 줄 입력
//			{
//				for (int j = 0; j <= i-1; j++)// 공백 입력
//				{
//					printf(" ");
//				
//				}
//				if (i % 3 == 0) // 별 입력
//				{
//					printf("*");
//				}
//				else if (i % 3 == 2)
//				{
//					printf("* *");
//				}
//				else if (i % 3 == 1)
//				{
//					printf("*****");
//					count++;
//				}
//								
//				printf("\n");
//				if (count >= 1)
//				{
//					addStar = count * 5;
//					count = 0;
//					for (int j = 0; j <= addStar - 1; j++)// 공백 입력
//					{
//						printf(" ");
//					}
//					if (i % 3 == 0) // 별 입력
//					{
//						printf("*");
//						addStar -= 2;
//					}
//					else if (i % 3 == 2)
//					{
//						printf("* *");
//					}
//					else if (i % 3 == 1)
//					{
//						printf("*****");
//					}
//					addStar -= 2;
//				}
//			}
//			break;
//		}
//		else
//		{
//			printf("잘못된 입력입니다. 다시 입력해주세요.\n\n");
//		}
//	}
//}