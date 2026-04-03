#include <stdio.h>

int main(void)
{
	int i=0;
	FILE *p;
	p=fopen("text.txt","r");
	for(i=0;i<10;i++)
	{
		printf("%c\n",*(p+i));
	}
	return 0;
}
