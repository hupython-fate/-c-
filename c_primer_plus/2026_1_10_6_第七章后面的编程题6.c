#include <stdio.h>

int main(void)
{
	char ch1,ch2;
	int ci=0;
	ch2=ch1=getchar();
	//ch2=getchar();
	while(ch1!='#' && ch2!='#')
	{
		//ch1是前一个出现的字符，
		//ch2是当前字符。
		ch2=getchar();
		if(ch1=='e' && ch2=='i')
			ci++;
		ch1=ch2;
	}
	printf("%d",ci);
	return 0;
}
