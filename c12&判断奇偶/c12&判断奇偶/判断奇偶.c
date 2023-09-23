#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d",&num);
	if (0 == num)
	{

		printf("0非奇数偶数");
	}
	else if (num % 2)
	{

		printf("奇数");
	}
	else
	{

		printf(" 偶数");
	}



	return 0;
}