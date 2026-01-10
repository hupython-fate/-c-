#include <stdio.h>

int main(void)
{
	char ch;
	int ci=0;
	ch=getchar();
	while(ch!='#')
	{
		switch(ch)
		{
			case '.':
				ch='!';
				ci++;
				//break;
			case '!':
				ci++;
		}
		ch=getchar();
	}
	printf("%d",ci);
	return 0;
}
