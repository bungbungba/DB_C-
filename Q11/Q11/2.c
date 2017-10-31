//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char str[100];
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
//	while ((fgets(str, 100, fp)) != NULL) // EOF 가면 NULL ptr 반환
//	{
//		length = strlen(str);
//		str[length - 1] = NULL; // \n지우기
//		puts(str); // 자동으로 \n해줌
//	}
//	fclose(fp);
//	return 0;
//}