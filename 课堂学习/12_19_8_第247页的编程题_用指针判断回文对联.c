#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100];
	printf("请输入一句对联，我将判断它是否是回文对联：");
	fgets(str,sizeof(str),stdin);
	
	int h=0;
	char *p1,*p2,*p3;	
	for(p1=str,p2=p1;p1<p2+strlen(str)-1;p1++)//打印出对应语句的ASCII码值列表，以便分析。
	{
		printf("%d ",*p1);
	/*	h++;
		if(h==3)
		{
			h=0;
			printf("\n");
		}*/
	}


	for(p1=str,p2=p1;p1<p2+strlen(str)-2;p1++);
	//用空语句遍历，使p1指向str的最后一个字符，不包括换行符。
	/*printf("*p1=%d\n",*p1);
	p3=str+2;
	printf("p3=%d\n",*p3);*/
	for(p3=str+2;p3<p2+strlen(str)/2;p3+=3,p1-=3)
	{
		if(*p1==*p3)
		{
			//printf("sss\n");
			h++;
		}
	}
	printf("%d   %d\n",strlen(str)/3-1,h*2);
	if(2*h==strlen(str)/3-1)//之所以要减1,是因为strlen会把换行符加进去。
	{
		printf("这是回文对联！");
	}
	else
		printf("这不是回文对联！");
	return 0;
}
