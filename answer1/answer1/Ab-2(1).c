//#include <stdio.h>
//
//void main()
//{
//
//	int floor, count = 0, addStar;
//
//	while (1)
//	{
//		printf("�Է� : ");
//		scanf_s(" %d", &floor);
//		
//		if (floor == 3 || (floor % 9 != 0 && floor % 6 == 0))//���� �ǵ�
//		{
//			for (int i = floor; i >= 1; i--) // �� �Է�
//			{
//				for (int j = 0; j <= i-1; j++)// ���� �Է�
//				{
//					printf(" ");
//				
//				}
//				if (i % 3 == 0) // �� �Է�
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
//					for (int j = 0; j <= addStar - 1; j++)// ���� �Է�
//					{
//						printf(" ");
//					}
//					if (i % 3 == 0) // �� �Է�
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
//			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n\n");
//		}
//	}
//}