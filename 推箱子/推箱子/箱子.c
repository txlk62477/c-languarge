#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
        int a, b, n, res;
        while (scanf("%d %d %d", &a, &b, &n) != EOF)
        {   
            
            if (b == n)
                printf("%d", 1);
            else if ((n - b) % (b - a) == 0)
            {
                res = 2 * (n - b) / (b - a) + 1;
                printf("%d", res);
            }
            else
            {
                res =  2*((n - b)/(b-a))+3 ; 
                printf("%d", res);
            }
        }
        return 0;

   }
	
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int n = 9;
//	int res = 0;
//	res =  2*(n - b)/(b-a)+3 ;             
//	printf("%d", res);
//
//	return 0;
//}