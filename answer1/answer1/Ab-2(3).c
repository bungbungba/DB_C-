//include <stdio.h>
//
//void main()
//{
//	int floor, space, x = 0, y = 5;
//	while (1)
//	{
//		printf("입력 : ");
//		scanf("%d", &floor);
//		if (floor == 3 || (floor % 9 != 0 && floor % 6 == 0))//숫자 판독
//		{
//			space = floor;
//			for (int i = 0; i < floor; i++)
//			{
//				for (int j = space; j >= 1; j--)//공백 출력
//				{
//					printf(" ");
//				}
//				if (i % 3 == 0) // 별
//				{
//					printf("*");
//				}
//				else if (i % 3 == 1)
//				{
//					printf("* *");
//				}
//				else if (i % 3 == 2)
//				{
//					printf("*****");
//				}
//
//				if (i / 3 >= 1) // 추가적 별 뽑아야 하나 
//				{
//					if (y < 0)
//					{
//						y = 5;
//					}
//					x = i / 3;
//
//					for (int j = 0; j < x; j++) // 몇개 더?
//					{
//						for (int k = y; k >= 1; k--) // 공백
//						{
//							printf(" ");
//						}
//					if (i % 3 == 0)
//					{
//						printf("*");
//					}
//					else if (i % 3 == 1)
//					{
//						printf("* *");
//					}
//					else if (i % 3 == 2)
//					{
//						printf("*****");
//					}
//					}
//
//					y -= 2;
//
//
//				}
//				printf("\n");
//				space--;
//			}
//			break;
//		}
//		else
//		{
//			printf("잘못된 입력입니다. 다시 입력해 주세요.\n\n");
//		}
//	}
//}