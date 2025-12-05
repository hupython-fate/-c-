#include <stdio.h>
#define A 1000000.00
#define B 0.08


int main(void)
{
	double jojo=A,i=0;
	int nian=0;
	//printf("%lf\n",jojo);

	while(jojo>0)
	{
		nian++;//计数器
		i=jojo*B;//
		jojo=i+jojo;
		jojo=jojo-100000;
		printf("%lf\n",jojo);
	}
	printf("一共需要%d年，钱会全部取完。\n",nian);
	return 0;
}
