#include <stdio.h>
#include <string.h>
int main(void)
{
	int i=0,j=0;
	char p[]="WIOJFY UAUH MJYYX NUMNY";
	while(i<strlen(p))//罗马皇帝，凯撒密码！
	{
		for(j=0;j<25;j++)
		{
			printf("%c",p[j]-i);
		}
		printf("\n");
		i++;
	}
	return 0;
}
