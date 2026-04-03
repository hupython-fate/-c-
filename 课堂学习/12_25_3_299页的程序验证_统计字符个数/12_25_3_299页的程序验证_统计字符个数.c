#include <stdio.h>

int main(void)
{
	FILE *p;
	long nnn=0;
	if((p=fopen("text.txt","r+"))==NULL)
	{
		printf("error!!");
		return 0;
	}
	while((fgetc(p))!='\n')
		nnn++;
	fclose(p);
	printf("num==%ld",nnn);
	return 0;
}
