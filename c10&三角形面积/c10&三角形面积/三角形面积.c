#include <stdio.h>
#include <math.h>

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	printf("�������һ���߳���");
	scanf_s("%f", &a);
	printf("������ڶ����߳���");
	scanf_s("%f", &b);
	printf("������������߳���");
	scanf_s("%f", &c);
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a)*(p - b)*(p - c));
	printf("%3f", s);


	return 0;
}