#include <stdio.h>
#include <string.h>
int main(void)
{
	char kkk[30];
	printf("请输入一个英文单词,我将打印它的倒序形式:");
	scanf("%s",kkk);
	int shu=strlen(kkk);//用来获取字符的长度,不包括空字符.
	for(int b=1;shu>=b;b++)
	{
		printf("%c",kkk[shu-b]);
	
	}
	return 0;

}
