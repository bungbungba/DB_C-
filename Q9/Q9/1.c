//#include <stdio.h>
//#include <process.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct student {
//	char name[20];
//	int age;
//	char country[4];
//	char department[3];
//}STUDENT;
//
//void Name(STUDENT *stu);
//void Age(STUDENT *stu);
//void Country(STUDENT *stu);
//void Department(STUDENT *stu);
//
//void main()
//{
//	FILE *fp;
//	STUDENT stu[16];
//	int i, menu;
//	
//	printf("%d\n", sizeof(stu));
//	if((fp = fopen("data1.dat", "r")) == NULL) {
//		printf("Fie Open Error!\n");
//		exit(-1);
//	}
//
//	i = 0;
//	while (!feof(fp))
//	{
//		fscanf(fp, "%s %d %s %s", stu[i].name, &stu[i].age, stu[i].country, stu[i].department);
//		i++;
//	}
//
//	while (1)
//	{
//		printf("1. NAME\n");
//		printf("2. AGE\n");
//		printf("3. COUNTRY\n");
//		printf("4. DEPARTMENT\n");
//		printf("5. QUIT\n");
//		printf("Please Enter Menu Number : ");
//
//		scanf("%d", &menu);
//
//		system("cls");
//
//		switch (menu)
//		{
//		case 1: Name(stu); break;
//		case 2: Age(stu); break;
//		case 3: Country(stu); break;
//		case 4: Department(stu); break;
//		case 5: return 0;
//		}
//
//		getch();
//		system("cls");
//	}
//	fclose(fp);
//}
//
//void Name(STUDENT * stu)
//{
//	char name[20];
//	int i;
//	printf("Enter search name : ");
//	scanf("%s", name);
//	
//	for (i = 0; i < 16; i++)
//	{
//		if (!strcmp(stu[i].name, name))
//		{
//			printf("%s\t\t%d\t%s\t%s\n", stu[i].name, stu[i].age, stu[i].country, stu[i].department);
//		}
//	}
//}
//
//void Age(STUDENT * stu)
//{
//	int i, age;
//	printf("Enter search age : ");
//	scanf("%d", &age);
//
//	for (i = 0; i < 16; i++)
//	{
//		if (stu[i].age == age)
//		{
//			printf("%s\t\t%d\t%s\t%s\n", stu[i].name, stu[i].age, stu[i].country, stu[i].department);
//		}
//	}
//}
//
//void Country(STUDENT * stu)
//{
//	int i;
//	char country[4];
//	printf("Enter search country : ");
//	scanf("%s", country);
//
//	for (i = 0; i < 16; i++)
//	{
//		if (!strcmp(stu[i].country, country))
//		{
//			printf("%s\t\t%d\t%s\t%s\n", stu[i].name, stu[i].age, stu[i].country, stu[i].department);
//		}
//	}
//}
//
//void Department(STUDENT * stu)
//{
//	int i;
//	char department[3];
//	printf("Enter search department : ");
//	scanf("%s", department);
//
//	for (i = 0; i < 16; i++)
//	{
//		if (!strcmp(stu[i].department, department))
//		{
//			printf("%s\t\t%d\t%s\t%s\n", stu[i].name, stu[i].age, stu[i].country, stu[i].department);
//		}
//	}
//}
