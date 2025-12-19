#include <stdio.h>

int *add(int x[],int y[],int k1,int k2)
{
	int i;
	int s;
	int *kkk=&s;
	*kkk=0;
	for(i=0;i<k1;i++)
		*kkk+=x[i];
	for(i=0;i<k2;i++)
		*kkk+=y[i];
	return kkk;
}


//    在函数add中，我们不应该使用sizeof来获取数组长度，因为数组作为参数传递时，会退化为指针。

//   应该将数组长度作为参数传递给add函数。


int main(void)
{
	int arr1[4];
	int arr2[4];
	printf("请输入8个数：");
	int i;
	for(i=0;i<4;i++)
	scanf("%d",&arr1[i]);
	for(i=0;i<4;i++)
	scanf("%d",&arr2[i]);
	//以上是输入部分


	int k1=sizeof(arr1)/sizeof(arr1[0]);
	int k2=sizeof(arr2)/sizeof(arr2[0]);

	//打印出来看看效果
	/*for(i=0;i<4;i++)
		printf("%d",arr1[i]);
	for(i=0;i<4;i++)
		printf("%d",arr2[i]);
	//效果不错*/
	//
	int a;
	int *p=&a;
	p=add(arr1,arr2,k1,k2);
	printf("%d",*p);


	/*printf("%d %d",k1,k2);
	//得出的值是16 16,为什么？很简单，一个int类型占4字节，4个int类型不就是4*4=16吗？16是字节数，而不是其它。
	//也就是说，会出现段错误，是因为数组访问越界了。
	//除一下就好了。*/
	return 0;
}
