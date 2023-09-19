#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int  r=2;
	scanf("%d %d", &m,&n);
	r = m % n;
	while (r)
	{
		m = n;
		n = r;
		r = m % n;
		


	}
	printf("%d", n);

	return 0;
}