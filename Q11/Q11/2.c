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
//	fseek(fp, 3, SEEK_SET); // TXT ������ UTF - 8 �̶��  BOM�� ���ֱ� ���� 3byte ����
//
//	while ((fgets(str, 100, fp)) != NULL) // EOF ���� NULL ptr ��ȯ
//	{
//		length = strlen(str);
//		str[length - 1] = NULL; // \n�����
//		puts(str); // �ڵ����� \n����
//	}
//	fclose(fp);
//	return 0;
//}