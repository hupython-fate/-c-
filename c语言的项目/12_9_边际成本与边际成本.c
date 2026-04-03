#include <stdio.h>

int main(void)
{
	double arr[12];
	printf("请输入旧成本（单位为元，可以有小数点）：");
	scanf("%lf",&arr[0]);

	printf("请输入新成本：");
	scanf("%lf",&arr[1]);

	printf("请输入旧收益：");
	scanf("%lf",&arr[2]);

	printf("请输入新收益：");
	scanf("%lf",&arr[3]);

	printf("请输入旧产量：");
	scanf("%lf",&arr[4]);

	printf("请输入新产量：");
	scanf("%lf",&arr[5]);

	arr[6]=arr[1]-arr[0];//这是总成本变化量
	arr[7]=arr[3]-arr[2];//总收入变化量
	arr[8]=arr[5]-arr[4];//产量的变化量
	
	arr[9]=arr[6]/arr[8];//MC,边际成本。
	arr[10]=arr[7]/arr[8];//MR,边际收益。
	arr[11]=arr[10]-arr[9];//MR-MC=边际利润。

	printf("您的边际成本为：%.6lf\n",arr[9]);
	printf("您的边际收益为：%.6lf\n",arr[10]);
	printf("您的边际利润为：%.6lf\n",arr[11]);

	if(arr[9]==arr[10])
	{
		printf("此时您应该停手，因为边际成本等于边际收益，已经达到利润的最大化的点，不应该减产也不应该增产。\n");
	}
	else if(arr[9]>arr[10])
	{
		printf("停！停！快点减产！因为您的边际利润是负数，是在亏损！您现在的边际利润是%lf,是负数，应该一直减产到边际利润为0为止。\n",arr[11]);
	}
	else if(arr[9]<arr[10])
	{
		printf("快点增产！您的边际利润为正数，是%lf，这说明您继续增产有利可图，应该一直增产到边际利润为0为止。\n",arr[11]);

	}
	return 0;
}
