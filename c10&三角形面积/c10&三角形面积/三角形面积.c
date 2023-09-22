#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	printf("请输入第一个边长：");
	scanf_s("%f", &a);
	printf("请输入第二个边长：");
	scanf_s("%f", &b);
	printf("请输入第三个边长：");
	scanf_s("%f", &c);
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a)*(p - b)*(p - c));
	printf("%3f", s);


	return 0;
}