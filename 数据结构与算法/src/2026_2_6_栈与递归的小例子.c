#include <stdio.h>
#include <stdlib.h>

long long f(long long x)//求第x项的斐波那契数列的值。
{
    if(x==1 || x==2) return 1;
    else return f(x-1) + f(x-2);
}
int main(void)
{
    //斐波那契数列递归求法。
    long long x;
    scanf("%lld",&x);
    long long y=f(x);
    printf("%lld",y);
    return 0;
}