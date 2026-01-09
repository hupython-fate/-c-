#include <stdio.h>
#include <math.h>
int main(void)
{
	int x,i;
	printf(">>");
	scanf("%d",&x);
	int m=sqrt(x);
	if(m*m==x)
	{
		printf("%d %d\n",m,m);
		return 0;
	}
	else
		for(i=m;m>=i;i--)
			if(x%i==0)
				break;
	int b=i,a=x/i;
	if(a*b==x)
	printf("%d %d\n",a,b);
	return 0;
}
