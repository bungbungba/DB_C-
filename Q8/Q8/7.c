//#include <stdio.h>
//#include <string.h>
//
//void main()
//{
//	char text[16][15] = {"John	", "kenedy	", "Bill	", "Clinton	", "George	", "Washington	", "Thomas	", "Jefferson	",
//		"James	", "Monre	", "Franklin", "Roosevelt	","Harry	", "Truman	", "Richard	", "Nixon	" };
//	char print[30] = { '\0' };
//	int i;
//	for (i = 0; i < 16; i += 2)
//	{
//		strcat(print, text[i]);
//		strcat(print, text[i + 1]);
//		printf("%s\n", print);
//		print[0] = '\0'; // 첫글자를 NULL로 만들어서 뒤의 문자열을 지움 NULL 또는 '\0' 사용 가능
//	}
//}