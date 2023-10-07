#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, c,n1;
    scanf("%d %d %d", &a, &b, &c);

    a > b ? a=a : (n1=a,a=b,b=n1);//交换思想
    a> c ? (a=a) : (n1=a,a=c,c=n1);//让最大值处于a
    b > c ? (b=b) : (n1 = b, b = c, c = n1);

    printf("从大到小 %d %d %d", a,b,c);

    /*if (a == n1)
    {
        c > b ? (n2 = c, n3 = b) : (n3 = c, n2 = b);
    }
    else if (b == n1)
    {
        a > c ? (n2 = a, n3 = c) : (n3 = a, n2 = b);
    }
    else
    {
        a > b ? (n2 = a, n3 = b) : (n3 = a, n2 = b);
    }*/

    /*printf("%d %d %d", n1, n2, n3);*/
	return 0;
}