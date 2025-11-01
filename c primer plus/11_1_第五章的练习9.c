#include <stdio.h>
void ti_wen(double hua)
{
	const float one=5.0;
	const float two=9.0;
	const float three=273.16;
	const int si=32;
	double se=one/two*(hua-si);//摄氏温度 
	double kai=se+three;//开氏温度 
	printf("三种温度如下：\n");
	printf("华氏温度：%.2f\n",hua);
	printf("摄氏温度：%.2f\n",se);
	printf("开氏温度：%.2f\n",kai);
}


 
int main(void)
{
	while(1)
	{
	double hua;
	printf("请输入一个华氏温度：");
	int aa=scanf("%lf",&hua);//scanf函数如果读取数字则返回1。 
	if(aa==1)
	ti_wen(hua);
	else
	break; 
    }
	return 0;
 } 
