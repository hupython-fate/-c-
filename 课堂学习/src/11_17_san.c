#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c;
	float aaa,s;
	printf("a=?,b=?,c=?:");
	scanf("%f %f %f",&a,&b,&c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
	{
		s=0.5*(a+b+c);
		aaa=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("san jiao xing de mian ji shi %f",aaa);
	}
	return 0;
}
