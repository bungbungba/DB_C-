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
//	fseek(fp, 3, SEEK_SET); // TXT ������ UTF - 8 �̶��  BOM�� ���ֱ� ���� 3byte ����
//
//	fseek(fp, 30, SEEK_CUR); // ������ġ���� 30byte ����
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