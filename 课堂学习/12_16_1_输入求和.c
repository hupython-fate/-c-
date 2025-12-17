#include <stdio.h>
#define A 100
int main(void)
{
int i=0;
int h=0;
int kk=0;
int asdf;
int arr[A];

//int aaa[]={0,1,234,562234};

while(1)
{
	h++;
	printf("请输入第%d个数：",h);
	scanf("%d",&arr[h-1]);
	if(arr[h-1]==0) break;
}

while(i<h-1)
{
	asdf=arr[i];
	kk+=asdf;
	printf("%d\t",arr[i]);

	i++;
}
	printf("数之和为：%d\n",kk);

	return 0;
}

