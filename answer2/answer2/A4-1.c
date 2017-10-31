#include <stdio.h>

void enterNumber(int *n,int *l,int *w);



void main()
{
	int truck[1000] = { 0 }, n, l, w, time = 0, count = 0, which[100] = { 0 }, total_weight = 0, result = 0;
	char data;

	enterNumber(&n, &l, &w);// 트럭 개수, 다리 길이, 하중

	printf("트럭의 무게를 순서대로 입력하시오 : "); // 트럭 개수에 따른 무게 입력
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &truck[i]);
		if (truck[i] < 1 || truck[i] > w)
		{
			printf("잘못된 값입니다. 다시 입력해 주세요\n\n");
			i--;
			continue;
		}
	}
	while(1)
	{
		total_weight = 0;

		for (int i = 0; i < l; i++)
		{
			which[i] = which[i + 1];
			total_weight += which[i];
		}
		if (total_weight + truck[count] <= w)
		{
			which[l - 1] = truck[count];
			count++;
		}
		for (int i = 0; i < l; i++)
		{
			if (which[i] != 0)
			{
				data = 'y';
				break;
			}
			data = 'n';
		}
		time++;
		if (data == 'n')
			break;
	}
	printf("(답) 최단시간 : %d초\n", time);
}

void enterNumber(int *n, int *l, int *w)
{
	printf("트럭의 개수(N) : 입력 : ");
	scanf("%d", n); // 개수
	while (1)
	{
		if (*n < 1 || *n > 1000)
		{
			printf("잘못된 값입니다. 다시 입력해 주세요\n\n");
			scanf("%d", n);
		}
		else
		{
			break;
		}
	}

	printf("다리의 길이(L) : 입력 : ");
	scanf("%d", l); // 길이
	while (1)
	{
		if (*l < 1 || *l > 100)
		{
			printf("잘못된 값입니다. 다시 입력해 주세요\n\n");
			scanf("%d", l);
		}
		else
		{
			break;
		}
	}

	printf("다리의 하중(W) : 입력 : ");
	scanf("%d", w); // 하중
	while (1)
	{
		if (*w < 10 || *w > 1000)
		{
			printf("잘못된 값입니다. 다시 입력해 주세요\n\n");
			scanf("%d", w);
		}
		else
		{
			break;
		}
	}

}