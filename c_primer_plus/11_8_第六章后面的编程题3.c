#include <stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	printf("%d,%d,%d,%d,%d,%d\n",'F','E','D','C','B','A');//大写的f的ascii码值是70.那edcba呢?
	for(a=1;a<=6;a++)
	{
		for(b=70,c=0;c<a;b--,c++)
			printf("%c",b);
	       printf("\n");
	}
	return 0;
}
//,69,68,67,66,65.这就是这几个字符的本质.
//第一次循环,a=1,c=0,0<1,成立,然后c++,1<1不成立,退出循环,打印换行符.
//第二次循环,a=2,c=0,0<2成立,打印F,然后c++,1<2成立,打印E,再然后c++,2<2不成立,退出循环,打印换行符.
//从分析结果来看,应该没有问题.
