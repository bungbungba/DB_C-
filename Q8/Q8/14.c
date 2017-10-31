//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//	FILE *fp;
//	char str[9][100];
//	int count = 0;
//	fp = fopen("14.txt", "r");
//	//fseek(fp, 3, SEEK_SET); // TXT 파일이 UTF - 8 이라면  BOM을 없애기 위해 3byte 땅김
//	while (!feof(fp))
//	{
//	//	printf("ERROR\n");
//		fgets(str[count], 100, fp);
//		count++;
//	}
//
//	fclose(fp);
//
//	for (int i = 0; i < count; i++)
//		if(strstr(str[i], "th")) printf("%d. %s", i + 1, str[i]);
//}