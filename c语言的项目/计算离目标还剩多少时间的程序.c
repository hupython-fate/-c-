#include <stdio.h>
#define nian 365
#define yue 30
#define zou 7
#define yueee 12
int main()
{
	int a,b,c,d,e,ee,xx,y,yy;
	printf("请输入今年的年份和月份：");
	scanf("%d,%d",&a,&b);
	printf("\n请输入目标年份和月份：");
    scanf("%d,%d",&c,&d);
    e=(a*yueee)+b;//现在的月份
	ee=(c*yueee)+d;//目标月份
	xx=ee-e;//差值月份 
	y=xx/yueee;//换算成差值年份 
	yy=xx%yueee;//换算的余数。
	printf("您还有%d年%d月的时间！",y,yy); 
    
 } 
