#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
int main()
{
	int a = 0;
	char* z = "正数";
	char* f = "负数";


	scanf("%d", &a);
	char* b =(a>0) ? z : f;
	printf("%s", b);







	return 0;
}