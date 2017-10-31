//#include <stdio.h>
//
//void main()
//{
//	char key[][10] =
//	{ "auto",
//		"double",
//		"int",
//		"struct",
//		"break",
//		"else",
//		"long",
//		"switch",
//		"case",
//		"enum",
//		"register",
//		"typedef",
//		"char",
//		"extern",
//		"return",
//		"union",
//		"const",
//		"float",
//		"short",
//		"unsigned",
//		"continue",
//		"for",
//		"signed",
//		"void",
//		"default",
//		"goto",
//		"sizeof",
//		"volatile",
//		"do",
//		"if",
//		"static",
//		"while" };
//	char str[10];
//	int i, b = 0;
//
//	printf("Enter some word : ");
//	scanf("%s", str);
//	for (i = 0; i < 32; i++)
//	{
//		if (!strcmp(str, key[i]))
//		{
//			b = 1;
//			break;
//		}
//	}
//	if (b) printf("%s is Keyword!\n", str);
//	else printf("%s isn't Keyword!\n", str);
//}