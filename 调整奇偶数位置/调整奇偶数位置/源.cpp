#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int zu[10] = { 1,25,36,596,46,45,54,6,12,61 };
	int i1 = 0, i2 = 0;

	for (i1 = 0;i1 <10;i1++)
	{
		int c = 0;
		for (i2 = 0;i2 < 9 - i1;i2++)
		{
			if (zu[i2] % 2 == 0)
			{
				int t;
				t = zu[i2];
				zu[i2] = zu[i2 + 1];
				zu[i2 + 1] = t;
				c++;
			}
		}
		if (c == 0)
			break;
	}

	for (i1 = 0;i1 < 10;i1++)
	{
		printf("%d ", *(zu + i1));
	}
	return 0;
}