#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n = 0;
    int i1, i2, i3, i4,i5,i6;
    int shu = 0;
    int c = 1;
    scanf("%d", &n);

    for (i1 = 1; i1 <= 3 * n; i1++)
    {
        for (i2 = 0; i2 < 3 * n-i1; i2++)
        {
            printf(" ");
        }//打印空格
        for (i3 = 0; i3 < c; i3++)
        {
            printf("* ");
        }
        
        int d = shu;
        while (d--)
        {
            for (i6 = 0; i6 < 3-c; i6++)
            {
                printf("  ");
            }
            for (i3 = 0; i3 < c; i3++)
            {
                printf("* ");
            }
        }
        c++;
        if (c == 4)
        {
            c = 1;
            shu++;
        }
        //打印主体分化为三角形
        //模块化
        printf("\n");
    }

    for (i5 = 0; i5 < n; i5++)
    {
        for (i4 = 0; i4 < n; i4++)//树干部分
        {
            if (i4 == n - 1)
            {
                printf("  *");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}