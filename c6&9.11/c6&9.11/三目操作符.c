#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
int main()
{
	int a = 0;
	char* z = "����";
	char* f = "����";


	scanf("%d", &a);
	char* b =(a>0) ? z : f;
	printf("%s", b);







	return 0;
}