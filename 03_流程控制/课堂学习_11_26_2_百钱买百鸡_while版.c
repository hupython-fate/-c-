#include <stdio.h>

#define G 5
#define M 3
#define X 1/3

int main(void)
{
	int a=0,b=0,c=0;
	while(a<100)
	{
		b=0;
		while(b<100)
		{
			c=0;
			while(c<100)
			{
				if(a+b+c==100 && a*G+b*M+c*X==100)
				{
					printf("公鸡的数量是%d只,母鸡的数量是%d只，小鸡的数量是%d只！\n",a,b,c);	
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return 0;
}
