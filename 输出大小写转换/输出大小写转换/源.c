#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char n1, n2;
	scanf("%c", &n1);

	if (n1 < 91)
	{
		n2 = n1 + 32;
		printf("%c", n2);
	}
	else
	{
		n2 = n1 - 32;
		printf("%c", n2);

	}




	return 0;
}