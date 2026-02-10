#include <stdio.h>

int main(void)
{
	int g=1000;//单位为m
	int a=0;
	int tm=0;
	while(a<g)
	{
		g++;
		a+=10;//阿基里斯的速度是龟的10倍。
		tm++;
	}
	printf("阿基里斯超越乌龟的时间为%dh",tm);
	//112次循环就超过了啊，为什么数学书上说没有逻辑问题?
	return 0;
}
