#include <stdio.h>

int main(void)
{
	char ch;
	int ci=0;
	ch=getchar();
	while(ch!='#')
	{
		if(ch=='.')
		{
			ch='!';
			ci++;
		}
		if(ch=='!')
		{	
			ci++;
		}
		ch=getchar();
	}
	printf("%d",ci);
	return 0;
}
