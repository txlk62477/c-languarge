#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int c = 0;
int max(int a, int b)
{
    if (a > b)
    {
        int c = a;
        return c;
    }
    else
    {
        int c = b;
        return c;
    }

   



}






int main()
 {

    int num1 = 0;
            int    num2=0;
            scanf("%d %d", &num1, &num2);
            int d = max(num1, num2);
       
        
    
  
    printf("%d",d);
    return 0;

}