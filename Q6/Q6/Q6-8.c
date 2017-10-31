//#include <stdio.h>
//
//int isprime(int num);
//
//void main()
//
//{
//	int num = 0, sum;
//	do {
//		sum = 0;
//		for (int i = 1; i <= 10; i++)
//		{
//			int j = 0;
//			printf("Enter the number : ");
//			scanf_s("%d", &num);
//			j = isprime(num);
//			if(j == 0)
//			sum += num;
//		}
//		printf("\nResult : %d\n\n", sum);
//	} while (getch() != 'q');
//}
//
//int isprime(int num)
//{
//	int count=0;
//	for (int i = 1; i <= num; i++)
//	{
//		if (num % i == 0)
//		{
//			count++;
//		}
//	}
//	if (count == 2 || num == 1)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}