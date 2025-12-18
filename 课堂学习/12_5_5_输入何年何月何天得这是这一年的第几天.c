#include <stdio.h>
int main(void)
{
	int i,j,z=0;
	int nian,yue,ri;
	int yue_tian[12]={31,28,31,30,31,30,31,31,30,31,30,31};//暂时不能填入具体的数，但可以先把逻辑写出来。
	//润年比平年多一天，也就是说，如果是润年，yue_tian[1]+1

	printf("请输入年份，月份，天数：");
	scanf("%d %d %d",&nian,&yue,&ri);
	if(nian%400==0 || (nian%4==0 && nian%100!=0))
	{
		//printf("%d年是闰年。",nian);
		yue_tian[1]+=1;
	}
	//else 	printf("%d是平年。",nian);
	//这个月的之前所有月的天数之和，加用户输入的天数。
	//一年365天。
	//月数数组
	//printf("请输入月份：");
	//scanf("%d",&yue);
	//用户输入的月份是从一开始的，而索引是从0开始的。
	//所以
	for(i=0;i<yue-1;i++)//计算用户输入的月份的之前所有月份之和。比入用户输入2,2-1=1,只会累加一次，z的值为1月的天数，也就是yue_tian[0]的值。
	{
		j=yue_tian[i];
		z+=j;//一个累加器
	}
//	printf("请输入今天的号(日)数：");
//	scanf("%d",&ri);
	//很明显，z+ri的值就是今年的第几天。
	z+=ri;
	printf("今天是今年的第%d天！\n",z);
	return 0;
}
