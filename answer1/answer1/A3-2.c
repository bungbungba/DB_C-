//#include <stdio.h>
//#include <stdlib.h>
//
//int myFactorial(int count);
//
//void main()
//{
//	int count = 0;
//	int result = 0;
//	char c;
//	do
//	{
//		printf("\n\n�� ���丮��? : ");
//		scanf("%d", &count);
//		fflush(stdin);
//		if (count > 0)
//		{
//			result = myFactorial(count);
//			printf("%d! = %d", count, result);
//		}
//		else
//		{
//			printf("�ڿ����� �Է��� �ּ���.");
//		}
//		
//	} while (getche() != 27);//getchar() != 27);//ascii 27 = esc
//}
//
//int myFactorial(int count)
//{
//	if (count == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return count * myFactorial(count - 1);
//	}
//}