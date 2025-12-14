#include <stdio.h>

int main(void)
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p;
	p=arr;
	int i;
	for(p=arr;*p<=10;p++)//用指针
	{
		printf("%d",*p);
	}
	printf("\n");
	for(i=0;*(arr+i)<=10;i++)//用数组名
	{
		printf("%d",*(arr+i));
	}

	return 0;
}
