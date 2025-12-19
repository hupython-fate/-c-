#include <stdio.h>

void swap(int *x,int *y)
{
	int k;
	k=*x;
	*x=*y;
	*y=k;
}




int main(void)
{
	int a=3,b=2;
	printf("交换之前：a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("交换之后：a=%d,b=%d\n",a,b);
	return 0;
}
