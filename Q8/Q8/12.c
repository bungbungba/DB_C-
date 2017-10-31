//#include <stdio.h>
//#include <Windows.h>
//
//void main()
//{
//	char door[5][11] = {
//		"1234567890",
//		"qwerty1234",
//		"abcde12345",
//		"Hello",
//		"Lock off",
//	};
//	char password[11], ch;
//	int i, b = 0;
//	for (i = 0; i < 11; i++)
//	{
//		if ((ch = getch()) != '\r')
//		{
//			password[i] = ch;
//			printf("* ");
//		}
//		else break;
//	}
//	password[i] = NULL;
//
//	for (i = 0; i < 5; i++)
//	{
//		if (!strcmp(password, door[i]))
//		{
//			b = 1;
//			break;
//		}
//	}
//	if (b)
//	{
//		printf("\nLock off the door Conguraturation!\n");
//		for (i = 0; i < 5; i++)
//		{
//			printf("\a");
//			Sleep(1000);
//		}
//	}
//	else printf("\a\nError password!\n");
//}