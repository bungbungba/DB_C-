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
//	lseek(fp, 3, SEEK_SET); // TXT ������ UTF - 8 �̶��  BOM�� ���ֱ� ���� 3byte ����
//
//	lseek(fp, 30, SEEK_CUR); // 30byte ����
//
//	read(fp, str, 10);
//	str[10] = NULL; // ������ ����
//	printf("%s\n", str);
//	close(fp);
//
//	return 0;
//}