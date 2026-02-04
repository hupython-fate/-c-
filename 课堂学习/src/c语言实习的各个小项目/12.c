#include <stdio.h>
#include <string.h>
int main(void)
{
	//输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。
	//
	//不应该用scanf，而是要用fgets
	
	int a=0;
	char arr[100];
	printf(">>>");
	fgets(arr,100,stdin);//会读取空格，而scanf则遇空格停止。
	
	//int xx=strlen(arr);

	/*//遍历字符串
	char *p=arr;
	char *p1=NULL;
	for(p1=p;p<p1+xx;p++)
	{
		if(*p==' ')
		{
			a++;
		}
	}
	printf("%d",a+1);*/
	
	int word_in=0,word_cont;


	for(a=0;arr[a]!='\0';a++)
	{
		if(arr[a]!=' '&&arr!='\t'&&arr!='\n')
		{
			if(word_in==0)
			{
				word_cont++;
				word_in=1;
			}
		}
		else
		{
			word_in=0;
		}
	}
	
	printf("%d",word_cont);
	return 0;
}
