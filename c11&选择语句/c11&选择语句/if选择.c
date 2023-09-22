#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int age = 1;
	printf("请输入年龄:");
	scanf("%d", &age);
	if (age<18)
	{
		printf("未成年");
	}
	else if (age < 45)
	{
		printf("中年");
	}
	else
	{

		printf("老年");
	}


	return 0;
}