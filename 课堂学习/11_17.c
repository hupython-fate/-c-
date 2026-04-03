#include <stdio.h>
int main(void)
{
	int x;
	printf("shu ru a shu:");
	scanf("%d",&x);
	if(x>0)
		printf("%d",1);
	if(x==0)
		printf("%d",0);
	if(x<0)
		printf("%d",-1);		
	return 0;

}
