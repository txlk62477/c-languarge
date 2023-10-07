#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    int n1, n2, n3;

    scanf("%d %d %d", &a, &b, &c);
    a > b ? (n1 = a) : (n1 = b);
    n1 > c ? (n1 = n1) : (n1 = c);
    
    if (a == n1) 
    {
        c > b ? (n2 = c,n3=b) : (n3 = c,n2=b);
    }
    else if (b == n1) 
    {
        a > c ? (n2 = a,n3=c) : (n3 = a,n2=b);
    }
    else
    {
        a > b ? (n2 = a, n3 = b) : (n3 = a,n2=b);
    }

    printf("%d %d %d", n1, n2, n3);
    return 0;
}