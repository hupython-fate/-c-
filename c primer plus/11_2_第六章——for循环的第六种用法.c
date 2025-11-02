#include <stdio.h>
#include <math.h>
int main(void)
{
	int y;
	for(int x=0;x<99;y=pow(++x,2))
	printf("%10d  %10d\n",x,y);
	return 0;
} 
