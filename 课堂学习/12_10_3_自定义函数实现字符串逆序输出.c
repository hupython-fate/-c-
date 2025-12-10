#include <stdio.h>
#include <string.h>

void ni(char kkk[],int xx)
{
	int i=0;
	for(i=xx-1;i>=0;i--)
	{
		printf("%c",kkk[i]);
	}
}

int main(void)
{
	char str[100];
	int k;
	puts("请输入一串字符串！");
	fgets(str,sizeof(str),stdin);
	k=strlen(str);
	ni(str,k);
	return 0;
}

