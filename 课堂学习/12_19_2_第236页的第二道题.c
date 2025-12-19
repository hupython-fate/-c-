#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100];
	printf("请输入一个字符串：");
	fgets(str,sizeof(str),stdin);
	char *p1,*p2;
	for(p1=str,p2=p1;p1<p2+strlen(str)-2;p1++);//-2是为了不倒序换行符
	for(;p2<=p1;p1--)
		printf("%c",*p1);
	return 0;
}
