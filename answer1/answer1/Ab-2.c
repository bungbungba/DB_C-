//#include <stdio.h>
//
//void main()
//{	
//	int floor;
//
//	while (1)
//	{
//		int bool, u_f, bol=0, count=0, line = 0,lf;
//
//		printf("입력 : ");
//		scanf_s(" %d", &floor);
//
//		bool = floor;
//		if (floor==3 || (floor % 9 != 0 && floor % 6 == 0))
//		{
//			for (int i = 1; i <= floor; i++)
//			{
//				for (int j = 1; j <= floor+2; j++)
//				{
//					lf = line / 3 ;
//					printf(" ");
//
//					if (j == bool)
//					{
//						if (count % 3 == 2)
//						{
//							printf("*****");
//							lf = lf * 5 - 4 ;
//						}
//						else if (count % 3 == 1)
//						{
//							printf("* *");
//							lf = lf * 5 - 2;
//						}
//						else if (count % 3 == 0)
//						{
//							printf("*");
//							lf = lf * 5;
//						}
//						if (bol >= 3)
//						{
//							if (line >= 6)
//							{
//								lf += (line / 3);
//								if (line % 6 == 0 || line % 6 == 1 || line % 6 == 2)
//								{
//									lf-=(line/6);
//								}
//							}
//							
//							for (int i = 1; i <= lf ; i++)
//							{
//								printf(" ");
//							}
//							if (count % 3 == 2)
//							{
//								printf("*****");
//							}
//							else if (count % 3 == 1)
//							{
//								printf("* *");
//							}
//							else
//							{
//								printf("*");
//							}					
//						}
//						bool--;
//						count++;
//						bol++;	
//					}
//				}
//				line++;
//				printf("\n");
//			}
//			break;
//		}
//		else
//		{
//			printf("잘못된 입력입니다. 다시 입력해주세요.\n\n");
//		}
//	}
//}