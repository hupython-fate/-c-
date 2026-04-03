#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p=(int *)calloc(10,sizeof(int));//calloc函数的使用是这样的，第一个参数是要分配的元素的个数，第二个参数是每一个元素的大小。
	//上面这句话的意思就是分配十个大小为4字节的内存空间。
	//内存空间分配在堆区。
	if(p==NULL)
	{
		printf("error!");
	}
	//与malloc不同，calloc会把内容初始化为0.
	
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d  ",*(p+i));
	}
	return 0;
}
