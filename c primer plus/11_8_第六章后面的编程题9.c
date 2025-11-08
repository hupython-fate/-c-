#include <stdio.h>
float shu(float shu_1,float shu_2)
{
	return (shu_1-shu_2)/(shu_1*shu_2);
}


int main(void)
{
	float a,b;
	printf("请输入两个数:");
	scanf("%f %f",&a,&b);
	float shu_3=shu(a,b);
	printf("%f",shu_3);
	return 0;


}
