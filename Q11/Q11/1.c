//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char str[100], breaker[100];
//	FILE *fp;
//
//	if ((fp = fopen("data.dat", "r")) == NULL)
//	{
//		printf("File Open Error!!!");
//		exit(-1);
//	}
//	fseek(fp, 3, SEEK_SET); // TXT 파일이 UTF - 8 이라면  BOM을 없애기 위해 3byte 땅김
//
//	int count = 0, line = 1, i = 0;
//	while ((fgets(str, 100, fp)) != NULL) // EOF 가면 NULL ptr 반환
//	{
//		for (i = 0; str[i] != '\n'; i++) if (str[i] == 'a') count++;
//		printf("#%d : %d\n", line++, count);
//		count = 0;
//		strcpy(breaker, str);
//	}
//	fclose(fp);
//	return 0;
//}