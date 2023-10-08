#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, n;
	int a, b, c, d;
	while (scanf("%d", &n) != EOF)
	{
	   
		for (i = 1;i <= n;i++)
		{
			scanf("%d %d %d %d", &a, &b, &c, &d);
			int num = 0;

			a > 0 ? a = 1 : (a = 0);
			b> 0 ? b = 1 : (b= 0);
			c> 0 ?c = 1 : (c = 0);
			d > 0 ? d= 1 : (d = 0);
			num = a + b + c + d;

			char* zu[] = { "Typically Otaku","Eye-opener","Young Traveller","Excellent Traveller","Contemporary Xu Xiake" };

			if (num < 4)
				printf("%s\n", zu[num]);
			else
				printf("%s\n", zu[4]);			
		}
	}
		return 0;
}