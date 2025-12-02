#include <stdio.h>
int main(void)
{
	int x,y;
	for(x=1;x<=100;x++)
	{
		if(x%3==0)
		printf("%d  ",x);
	}
	printf("能被三整除。\n");
	return 0;
}
