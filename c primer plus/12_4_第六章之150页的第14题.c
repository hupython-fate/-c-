#include <stdio.h>
int main(void)
{
	double arr1[8];
	double arr2[8];
	int i=0;
	double j=0;
	while(i<8)
	{
		printf("请输入第%d个数（%d/8）：",i+1,i+1);
		scanf("%lf",&arr1[i]);
		i++;
	}
	i=0;
	while(i<8)
	{
		printf("%lf  ",arr1[i]);
		i++;
	}
	printf("\n");
	i=0;
	while(i<8)
	{
		//j=arr1[i];
		j+=arr1[i];
		printf("%lf  ",j);
		i++;
	}
	return 0;
}
