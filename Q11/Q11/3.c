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
//	fseek(fp, 3, SEEK_SET); // TXT ������ UTF - 8 �̶��  BOM�� ���ֱ� ���� 3byte ����
//	
//	if ((copy = fopen("copy8_10.txt", "w")) == NULL)
//	{
//		printf("File Open Error!!!");
//		exit(-1);
//	}
//		
//	while ((fgets(str, 100, fp)) != NULL) // EOF ���� NULL ptr ��ȯ
//	{
//		fputs(str, copy);
//	}
//	fclose(fp);
//	fclose(copy);
//	return 0;
//}