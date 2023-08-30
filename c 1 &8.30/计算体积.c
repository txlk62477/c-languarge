#include<stdio.h>//错误太多

#define Height 10

int calculate(int Long, int Width);

int main()

{
	int m_Long;
	/*定义整型变量，表示长度*/
	int m_Width;

		int result;
	
		printf("长方形的高度为：%d\n", Height);
	
		printf("请输入长度\n");
	
		scanf("%d", &m_Long);
	
		printf("请输入宽度\n");
	
		scanf("%d", &m_Width);
	
		result = calculate(m_Long, m_Width);
	
	printf("长方体的体积是：")；
		
		printf("%d\n", result);
	
		return 0;
	
 }
int calculate(int Long, int Width)
/*定义计算体积函数*/
{
	int result = Long * Width * Height;
	/*具体计算体积*/
	return result;
	/*将计算的体积结果返回*