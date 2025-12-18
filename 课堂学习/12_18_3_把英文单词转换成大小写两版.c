#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[100],str2[100];
	printf("请输入一个英文单词：");
	fgets(str1,sizeof(str1),stdin);
	char *p=NULL,*p1=NULL,*p2=NULL;
	int k=strlen(str1);
	for(p=str1,p1=p;p<p1+k;p++)
	{
		if(*p>=65 && *p<=91)//如果条件为真，就说明是一个大写字母
				    //大写转小写
		{
			*p+=32;
		}
	}
	puts(str1);
	for(p=str1,p1=p,p2=str2;p<p1+k;p++)
	{
		if(*p<=123 && *p>=97)//小写转大写
		{
			*p-=32;
			*p2=*p;
			p2++;
		}
	}
	puts(str2);
	return 0;
}
