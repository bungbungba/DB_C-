//include <stdio.h>
//
//void main()
//{
//	int floor, space, x = 0, y = 5;
//	while (1)
//	{
//		printf("�Է� : ");
//		scanf("%d", &floor);
//		if (floor == 3 || (floor % 9 != 0 && floor % 6 == 0))//���� �ǵ�
//		{
//			space = floor;
//			for (int i = 0; i < floor; i++)
//			{
//				for (int j = space; j >= 1; j--)//���� ���
//				{
//					printf(" ");
//				}
//				if (i % 3 == 0) // ��
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
//				if (i / 3 >= 1) // �߰��� �� �̾ƾ� �ϳ� 
//				{
//					if (y < 0)
//					{
//						y = 5;
//					}
//					x = i / 3;
//
//					for (int j = 0; j < x; j++) // � ��?
//					{
//						for (int k = y; k >= 1; k--) // ����
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
//			printf("�߸��� �Է��Դϴ�. �ٽ� �Է��� �ּ���.\n\n");
//		}
//	}
//}