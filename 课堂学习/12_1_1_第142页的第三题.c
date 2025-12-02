#include <stdio.h>
int main(void)
{
	int x=0,i;
	//要设两个变量，分别代表富翁和默生人。
	float f=0,m=0.1;
	//printf("请输入换钱的次数：");
	//scanf("%d",&x);
	for(i=0;i<25;i++)
	{
		f=f+100000;
		m=m*2;
		if(m>f)
		{
			break;
			printf("在第%d天，陌生人的钱超过了富翁！\n",i+1);
		}
	}
	//这个程序能求出何时陌生人的钱大于富翁，从中偈示一个道理，以何种速度增长很重要，如果不增长，就会像富翁一样被超越。
	return 0;
}
