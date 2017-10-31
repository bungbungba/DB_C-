//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
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
//	fseek(fp, 30, SEEK_CUR); // 현재위치에서 30byte 땅김
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		ch = fgetc(fp);
//		printf("%c", ch);
//	}
//	printf("\n");
//
//	fclose(fp);
//	return 0;
//}