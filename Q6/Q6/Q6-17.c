//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void main()
//{
//	int num, answer, seed, count = 0;
//	seed = time(NULL);
//	srand(seed);
//	do
//	{
//		count = 0;
//		answer = rand() % 201;
//		printf("%d\n", answer);
//		while (1)
//		{
//			printf("Enter number : ");
//			scanf("%d", &num);
//			count++;
//			if (num < answer)
//			{
//				printf("Sorry!! Not matched... the number is bigger than %d\n", num);
//			}
//			else if (num > answer)
//			{
//				printf("Sorry!! Not matched... the number is smaller than %d\n", num);
//			}
//			else
//			{
//				printf("Congratulation!! \"%d\" is matched\n", num);
//				printf("You enter %d numbers.\n", count);
//				system("pause");
//				break;
//			}
//		}
//		system("cls");
//	} while (getch() != 'q');
//}