#include <stdio.h>
int main(void)
{	float a;
	scanf("%f",&a);
	printf("%f",a);
	//输入1/2能不能打印出0.5呢?
	return 0;
}
//实验的结果是不行,输入1/2,只会读取1,输入321/654,只会读取321,不过.分数的本质是除法,可以这样提醒用户.:wq

