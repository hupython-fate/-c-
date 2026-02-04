#include <stdio.h>

void ppp(unsigned int k)
{
	if(k>9)
	{
		ppp(k/10);
	}
	printf("%d  ",k%10);
}


int main(void)
{
	unsigned int x=0;
	printf("请输入一个数：");
	scanf("%u",&x);
	ppp(x);
	return 0;
}

//递归是一种普遍使用的算法和程序设计计巧，能大大的减少代码量，使代码更优美。
//递归的一大重点是必须要设制递归的终止条件，否则就会变成和死循环类似的死递归。
