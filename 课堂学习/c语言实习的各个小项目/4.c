#include <stdio.h>
int main(void)
{
	int i,j;
	int a,kkk=1;
	float lll=0.0;
	float b[100]={0};
	printf("请问你要输入几个学生的成绩？_____\b\b\b\b");
	scanf("%d",&a);
	printf("如果你对输入感到厌烦，那么就输入q终止输入。\n");
	for(i=0;i<a;i++)
	{
		printf("请输入第%d个学生的成绩：",i+1);
		kkk=scanf("%f",&b[i]);
		if(kkk==0) break;	
	}

	printf("不及格的成绩如下：");
	for(j=0;j<i;j++)
	{
		if(b[j]<60.0)
		printf("%.0f\t",b[j]);
	}

	for(j=0;j<i;j++)
	{
		if(b[j]>=60.0)
			lll+=b[j];
	}
	printf("\n");
	printf("成绩及格的分数总和为%.3f,平均成绩为%.3f",lll,lll/(i+1));
	return 0;
}
