#include <stdio.h>

void poo(int arr[],int x)
{
	if(x==-1) return;
	poo(arr,x-1);
	if(x==0 || x==1)
		printf("%5d\n",1);
	else if(x>=2)
	{
		arr[x]=arr[x-1]+arr[x-2];
		printf("%5d\n",arr[x]);
	}
}



int main(void)
{
	int arr[100];
	arr[0]=1;
	arr[1]=1;
	int x=20;
	poo(arr,20);
	return 0;
}
