#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int age = 1;
	printf("����������:");
	scanf("%d", &age);
	if (age<18)
	{
		printf("δ����");
	}
	else if (age < 45)
	{
		printf("����");
	}
	else
	{

		printf("����");
	}


	return 0;
}