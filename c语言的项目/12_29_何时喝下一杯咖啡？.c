#include <stdio.h>
#include <math.h>
//咖啡的半衰期是5h，咖啡因的每天最高摄入量为400毫克，1克等于1000毫克。

int main(void)
{
	int i=0;
	float coffee;
	float kkk=1000;
	printf("请问你在这一刻喝了多少克的咖啡？：");
	scanf("%f",&coffee);
	//咖啡因每5小时减半。
	while(fabs(kkk-coffee)>0.000001)
	{
		i++;
		kkk=coffee;//前一个值
		coffee-=coffee/2;//后一个值
		printf("%f\n",coffee);
	}
	printf("您需要等%.2f小时，再喝下一杯的咖啡！\n",i*5.0);
	printf("也就是说，您需要等%.2f天，才能喝下一杯咖啡！\n",(i*5.0)/24);
	return 0;
}
