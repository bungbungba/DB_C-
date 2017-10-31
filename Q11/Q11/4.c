//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main();
//
//void Raw_Reverse_Print(FILE *fp); // �� �� �Ųٷ� ���
//void Text_Reverse_Print(FILE *fp); // ������ �������� ���
//void Last_Raw_Print(FILE *fp);
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
//	Raw_Reverse_Print(fp);
//	fseek(fp, 3, SEEK_SET); //�а��� ���󺹱�
//	printf("\n===================================\n");
//	Text_Reverse_Print(fp);
//	fseek(fp, 3, SEEK_SET);
//	printf("===================================\n");
//	Last_Raw_Print(fp);
//
//	fclose(fp);
//	return 0;
//}
//
//void Raw_Reverse_Print(FILE * fp)
//{
//	char str[100];
//	int length;
//	 
//	while (fgets(str, 50, fp)) // \n �� ����
//	{
//		length = strlen(str, 50, fp);
//		if (str[length - 1] == '\n') // \n ����
//		for (; length > 0; length--)
//			printf("%c", str[length - 1]);
//	}
//}
//
//void Text_Reverse_Print(FILE * fp)
//{
//	char str[100];
//	if (!fgets(str, 50, fp)) return 0;
//	Text_Reverse_Print(fp);
//	//fputs(str, stdout);
//	printf("%s", str);
//}
//
//void Last_Raw_Print(FILE * fp)
//{
//	char str[100], check_end[100];
//	while (fgets(check_end, 50, fp)) strcpy(str, check_end);
//	printf("%s", str);
//}
