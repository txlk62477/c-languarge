#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d",&num);
	if (0 == num)
	{

		printf("0������ż��");
	}
	else if (num % 2)
	{

		printf("����");
	}
	else
	{

		printf(" ż��");
	}



	return 0;
}