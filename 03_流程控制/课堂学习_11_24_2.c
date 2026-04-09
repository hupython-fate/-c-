#include <stdio.h>
//#define a0 5  //首项为5
#define gong 2  //公比为2
int main(void)
{	//需求是用户输入一个数，算出该等比数列的和。
	//用来计算等比数列的和。
	int a=0;
	int i;
	float s,an=5;//
		  //a[n]=a[n-1]*2,s[n]=s[n-1]+a[n]
		  //也许可以用数组来处理。
		  //a[n]=
	//int i=0;
	printf("请输入等比数列的项数：");
	scanf("%d",&a);//用户输入1,会循环两次。
	for(s=0,i=1;i<=a;s=s+an,an=an*gong,i++);
	printf("等比数列的和为%f",s);
	return 0;
}
