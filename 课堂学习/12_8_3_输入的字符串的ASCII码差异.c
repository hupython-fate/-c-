#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[10],b[10];
	int c,d,i;
	puts("请输入第一串字符串:");
	fgets(a,sizeof(a),stdin);
	puts("请输入第二串字符串:");
	fgets(b,sizeof(b),stdin);
	//要输出两串字符串中第一个不同字符的ASCII码之差。
	//具体怎么做？
	c=strlen(a);
	d=strlen(b);
	for(i=0;i<10;i++)
	{
		if(a[i]!=b[i])
		{
			printf("%d",a[i]-b[i]);
			break;
		}
	}
	return 0;
}
