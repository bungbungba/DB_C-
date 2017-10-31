//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//	FILE *fp;
//	char str[100][20];;
//	char same[100], star[] = "********************";
//	int i, j, count = 0, b, arr[100] = { 0 }, max, min;
//
//	fp = fopen("14.txt", "r");
//	//	fseek(fp, 3, SEEK_SET); // TXT 파일이 UTF - 8 이라면  BOM을 없애기 위해 3byte 땅김
//	while (!feof(fp))
//	{
//		b = 1;
//		fscanf(fp, "%s", same);
//		for (i = 0; i <= count; i++)
//			if (!strcmp(str[i], same))
//			{
//				arr[i]++;
//				b = 0;
//			}
//		if (b)
//		{
//			strcpy(str[count], same);
//			count++;
//		}
//	}
//	fclose(fp);
//
//	max = min = arr[0];
//	for (i = 1; i < count; i++)
//	{
//		if (max < arr[i]) max = arr[i];
//		if (min > arr[i]) min = arr[i];
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%-20s\t%d\t\t", str[i], arr[i] + 1);
//		if (arr[i] != min && arr[i] != max)
//			for (j = 0; j < (20) * (arr[i] + 1)/ (max - min); j++) printf("*");
//		else if(arr[i] == max) printf("%s", star);
//		else printf("*");
//		printf("\n");
//	}
//	printf("%d\n", count);
//}