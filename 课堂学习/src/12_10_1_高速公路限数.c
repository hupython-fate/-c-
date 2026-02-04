#include <stdio.h>
#define WW 1.2

char xx[100]="您的车速在正常范围内。";
char yy[100]="您的车速过低！";
char zz[100]="您已超速！";
char kk[100]="您已严重超速！";

void wai(int s)
{
	if(s>=60 && s<=80)
	{
		puts(xx);	
	}
	else if(s<60)
	{
		puts(yy);
	}
	else if(s>80 && s<=80*WW)
	{
		puts(zz);	
	}
	else if(s>80*WW)
	{
		puts(kk);	
	}
}
void zhong(int s)
{
	if(s>=70 && s<=90)
	{
		puts(xx);	
	}
	else if(s<70)
	{
		puts(yy);
	}
	else if(s>90 && s<=90*WW)
	{
		puts(zz);	
	}
	else if(s>90*WW)
	{
		puts(kk);	
	}
}

void nei(int s)
{
	if(s>=80 && s<=100)
	{
		puts(xx);	
	}
	else if(s<80)
	{
		puts(yy);
	}
	else if(s>100 && s<=100*WW)
	{
		puts(zz);	
	}
	else if(s>100*WW)
	{
		puts(kk);	
	}
}


int main(void)
{
	int a,b;
	printf("请问车俩是在那一条车道行使的？\n");
	printf("如果是外侧车道请输入0。\n");
	printf("如果是中间车道请输入1。\n");
	printf("如果是内测车道请输入2。\n");
	while(1)
	{
		printf("您的输入：");
		scanf("%d",&a);
		if(a!=1 && a!=0 && a!=2)
		{
			printf("请您输入正确的选项，或者去掉小数点。\n");
			continue;
		}
		else break;
	}
	printf("请问这俩车的车速为？");
	scanf("%d",&b);
	switch(a)
	{
		case 0:
			wai(b);
			break;
		case 1:
			zhong(b);
			break;
		case 2:
			nei(b);
			break;
	}
	return 0;
}
