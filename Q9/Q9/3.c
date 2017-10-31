//#include <stdio.h>
//#include <process.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct employee
//{
//	char number[6];
//	char insurance[3];
//	int t_money;
//	int saving;
//	int t_working;
//	int t_over;
//}EMPLOYEE;
//
//double Pay(EMPLOYEE emp);
//void swap(int *arr, int n);
//void sort(double *pay);
//
//void main()
//{
//	EMPLOYEE emp[5];
//	FILE *fp;
//	int i, arr[5] = { 0,1,2,3,4 };
//	double pay_sort[5] = { 0 };
//
//	if ((fp = fopen("data3.dat", "r")) == NULL)
//	{
//		printf("File Open Error!\n");
//		exit(-1);
//	}
//	i = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%s %d %s %d %d %d", emp[i].number, &emp[i].t_money, emp[i].insurance, &emp[i].saving, &emp[i].t_working, &emp[i].t_over);
//		i++;
//	}
//
//	for (i = 0; i < 5; i++) pay_sort[i] = Pay(emp[i]);
//
//	sort(pay_sort, arr);
//
//	for (i = 0; i < 5; i++)
//	{
//		printf(" %d.%-5s%4.2lf\n", i + 1, emp[arr[i]].number, pay_sort[arr[i]]);
//		
//	}
//}
//
//double Pay(EMPLOYEE emp)
//{
//	double result = 0, insurance = 0;
//
//	result = emp.t_money * emp.t_working;
//	result += (1.3 * emp.t_money) * emp.t_over;
//	if (!strcmp(emp.insurance, "O")) insurance = result * 0.1;
//	result -= insurance - emp.saving;
//
//	return result;
//}
//
//void swap(int *arr, int n)
//{
//	int temp = arr[n];
//	arr[n] = arr[n + 1];
//	arr[n + 1] = temp;
//}
//
//void sort(double * pay, int *arr)
//{
//	int i, j, b;
//
//	for (i = 1; i < 5; i++)
//	{
//		b = 1;
//		for (j = 0; j < 5 - i; j++)
//		{
//			if (pay[arr[j]] < pay[arr[j + 1]])
//			{
//				swap(arr, j);
//				b = 0;
//			}
//		}
//		if (b) return 0;
//	}
//}