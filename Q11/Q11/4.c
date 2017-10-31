//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main();
//
//void Raw_Reverse_Print(FILE *fp); // 각 행 거꾸로 출력
//void Text_Reverse_Print(FILE *fp); // 내용을 역순으로 출력
//void Last_Raw_Print(FILE *fp);
//
//int main()
//{
//	char ch;
//	int length;
//	FILE *fp;
//
//	if ((fp = fopen("data.dat", "r")) == NULL)
//	{
//		printf("File Open Error!!!");
//		exit(-1);
//	}
//	fseek(fp, 3, SEEK_SET); // TXT 파일이 UTF - 8 이라면  BOM을 없애기 위해 3byte 땅김
//
//	Raw_Reverse_Print(fp);
//	fseek(fp, 3, SEEK_SET); //읽고나서 원상복귀
//	printf("\n===================================\n");
//	Text_Reverse_Print(fp);
//	fseek(fp, 3, SEEK_SET);
//	printf("===================================\n");
//	Last_Raw_Print(fp);
//
//	fclose(fp);
//	return 0;
//}
//
//void Raw_Reverse_Print(FILE * fp)
//{
//	char str[100];
//	int length;
//	 
//	while (fgets(str, 50, fp)) // \n 도 읽음
//	{
//		length = strlen(str, 50, fp);
//		if (str[length - 1] == '\n') // \n 없앰
//		for (; length > 0; length--)
//			printf("%c", str[length - 1]);
//	}
//}
//
//void Text_Reverse_Print(FILE * fp)
//{
//	char str[100];
//	if (!fgets(str, 50, fp)) return 0;
//	Text_Reverse_Print(fp);
//	//fputs(str, stdout);
//	printf("%s", str);
//}
//
//void Last_Raw_Print(FILE * fp)
//{
//	char str[100], check_end[100];
//	while (fgets(check_end, 50, fp)) strcpy(str, check_end);
//	printf("%s", str);
//}
