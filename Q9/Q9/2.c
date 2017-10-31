//#include <stdio.h>
//#include <process.h>
//
//typedef struct student{
//	char name[20];
//	int eng;
//	int math;
//}STUDENT;
//
//void swap(int *arr, int i); // 값 바꾸는 함수
//void Name(STUDENT *stu, int *name); // 이름 sorting
//void Grade(int *sum, int *grade); // 등급 sorting
//void print_arr(STUDENT *stu, int *arr);  // 배열 출력
//
//void main()
//{
//	FILE *fp;
//	STUDENT stu[10];
//	int i, name[10], grade[10], sum[10];
//
//	for (i = 0; i < 10; i++) name[i] = grade[i] = i;
//
//	if ((fp = fopen("data2.dat", "r+")) == NULL)	{
//		printf("File Open Error!\n");
//		exit(-1);
//	}
//
//	i = 0;
//	
//	while (i < 10)	{
//		fscanf(fp, "%s %d %d", stu[i].name, &stu[i].eng, &stu[i].math);
//		sum[i] = stu[i].eng + stu[i].math;
//		i++;	}
//	Name(stu, name);
//	Grade(sum, grade);
//	print_arr(stu, name, fp);
//	print_arr(stu, grade, fp);
//	fclose(fp);
//}
//
//void swap(int * arr, int i)
//{
//	int temp;
//	temp = arr[i];
//	arr[i] = arr[i + 1];
//	arr[i + 1] = temp;
//}
//
//void Name(STUDENT * stu, int * name)
//{
//	int i, j, b;
//	
//	for (i = 1; i < 10; i++)	{
//		b = 1;
//		for (j = 0; j < 10 - i; j++)		{
//			if ((strcmp(stu[name[j]].name, stu[name[j + 1]].name)) == 1)			{
//				swap(name, j);
//				b = 0;
//			}
//		}
//		if (b) return 0;
//	}
//}
//
//void Grade(int * sum, int * grade)
//{
//	int i, j, b;
//
//	for (i = 1; i < 10; i++)
//	{
//		b = 1;
//		for (j = 0; j < 10 - i; j++)
//		{
//			if (sum[grade[j]] < sum[grade[j + 1]])			{
//				swap(grade, j);
//				b = 0;
//			}
//		}
//		if (b) return 0;
//	}
//}
//
//void print_arr(STUDENT * stu, int * arr, FILE *fp)
//{
//	int i;
//
//	printf("\n");
//
//	fprintf(fp, "\n");
//
//	for (i = 0; i < 10; i++) 	{
//
//		printf("%3d. %-15s%5d%5d\n", i + 1, stu[arr[i]].name, stu[arr[i]].eng, stu[arr[i]].math);
//		fprintf(fp, "%3d. %-15s%5d%5d\n", i + 1, stu[arr[i]].name, stu[arr[i]].eng, stu[arr[i]].math);
//	}
//}