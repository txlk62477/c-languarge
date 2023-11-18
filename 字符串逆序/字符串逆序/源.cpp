#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char zu[10000] = { 0 };
	
	int t = 0,i=0;
	scanf("%c", &zu[t]);
	while (zu[t++] !='\n')
	{
		scanf("%c", &zu[t]);
	}
	for (i = 0;i < t-1;i++)
	{
		printf("%c", zu[t-i-2]);
	}
	return 0;
}
//I am a student