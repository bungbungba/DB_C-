//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <fcntl.h>
//
//int main()
//{
//	char str[20];
//	int fp ,length;
//
//	if ((fp = open("data.dat", O_RDONLY | O_BINARY)) < 0)
//	{
//		printf("File Open Error!!!");
//		exit(-1);
//	}
//
//	lseek(fp, 3, SEEK_SET); // TXT ÆÄÀÏÀÌ UTF - 8 ÀÌ¶ó¸é  BOMÀ» ¾ø¾Ö±â À§ÇØ 3byte ¶¥±è
//
//	lseek(fp, 30, SEEK_CUR); // 30byte ¶¯±è
//
//	read(fp, str, 10);
//	str[10] = NULL; // ¸¶Áö¸· ¼³Á¤
//	printf("%s\n", str);
//	close(fp);
//
//	return 0;
//}