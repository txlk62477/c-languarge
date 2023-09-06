#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	int i = 1;
	int result = 1;
	scanf("%d", &num);
	if (num < 0){
		printf("ÊäÈë´íÎó");
	}
	else if (num == 0){


		printf("1");
	}
	else{
		while (i<= num)
		{
			result = result * i;
			i = i + 1;

		}
		printf("%d", result);
	}
		return 0;	
}