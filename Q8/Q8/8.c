//#include <stdio.h>
//#include <string.h>
//
//void main()
//{
//	char text[16][15] = {"John	", "Kenedy	", "Bill	", "Clinton	", "George	", "Washington	", "Thomas	", "Jefferson	",
//		"James	", "Monre	", "Franklin", "Roosevelt	","Harry	", "Truman	", "Richard	", "Nixon	" };
//	char *print[16];
//	char *temp;
//	int i, j, b;
////	int print[16];
////	int temp;
//
//	printf("%d\n", strcmp(text[0], text[2]));
//
//	for (i = 0; i < 16; i++) print[i] = text[i];
//	for (i = 1; i < 16; i++)
//	{
//		b = 1;
//		for (j = 0; j < 16 - i; j++)
//		{
//			if (strcmp(print[j], print[j + 1]) == 1)//temp[print[j]], temp[print[j + 1]]) == 1)
//			{
//				temp = print[j];
//				print[j] = print[j + 1];
//				print[j + 1] = temp;
//				b = 0;
//			}
//		}
//		if (b) break;
//	}
//	for (i = 0; i < 16; i++) printf("%s\n", print[i]);//text[print[i]]);
//}