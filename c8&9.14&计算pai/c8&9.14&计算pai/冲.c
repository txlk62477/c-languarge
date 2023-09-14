#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//最大计算到84，改不显示
int n = 1;
double pai = 1.0;
double che1(n)//定义函数
{
	double res = 1;             //不同思路算法
	double i = 1;
	while (i <= n)
	{
		res = res * 2 * i * 2 * i;
		i = i + 1;

	}
	return res;

}
double che2(n)
{
	double res = 1;
	double i = 1;
	while (i <= n)
	{
		res = res * (2*i+1) * (2*i + 1);
		i = i + 1;

	}

	return res;
}





int main()
{
	scanf("%d", &n);
	double pai = (2*n+1)*2 * che1(n) / che2(n);

		printf("%10f", pai);





	return 0;
}