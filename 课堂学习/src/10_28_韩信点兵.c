#include <stdio.h>
int main()
{
	for(int i=1;i<=60000;i++)
	{
		if(i%3==1 && i%5==2 && i%7==4 && i%13==6 && i>50000)
		{
			printf("%d\n",i);
		}
	}
 } 
