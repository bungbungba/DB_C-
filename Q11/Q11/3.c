//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char str[100];
//	int length;
//	FILE *fp, *copy;
//
//	if ((fp = fopen("data.dat", "r")) == NULL)
//	{
//		printf("File Open Error!!!");
//		exit(-1);
//	}
//	fseek(fp, 3, SEEK_SET); // TXT 파일이 UTF - 8 이라면  BOM을 없애기 위해 3byte 땅김
//	
//	if ((copy = fopen("copy8_10.txt", "w")) == NULL)
//	{
//		printf("File Open Error!!!");
//		exit(-1);
//	}
//		
//	while ((fgets(str, 100, fp)) != NULL) // EOF 가면 NULL ptr 반환
//	{
//		fputs(str, copy);
//	}
//	fclose(fp);
//	fclose(copy);
//	return 0;
//}