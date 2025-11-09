#include <stdio.h>
#include <math.h>
int main(void)
{
	int a;
	float b,c=0,d=0;
	while(1)
	{
	a=0,c=0,d=0;
	printf("\n");
	printf("请输入序列的次数:");
	scanf("%d",&a);
	for(b=1.0;b<=a;b=b+1.0)
	{
		c=c+1.0/b;
	}
	printf("第一个序列的对应值:%f\n",c);
	for(b=1;b<=a;b++)
	{
		d=d+(1.0/b)*pow(-1,b);
	}
	printf("第二个序列对应值:%f",d);
	if(a==0 || a<0)
		break;
	}
	return 0;
}
