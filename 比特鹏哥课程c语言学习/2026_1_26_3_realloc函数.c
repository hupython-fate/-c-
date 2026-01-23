#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//realloc函数可以对动态分配的内存空间进行调整，这个函数也正是动态管理内存中的精髓。
	//正因为这个函数，故而可以动态调整内存。
	//函数原型为 void* realloc(void *ptr ,size_t num);
	//前一个参数是指向动态内存管理的指针，后一个是要变成的字节数。
	//
	
	int *p=(int *)calloc(10,sizeof(int));
	if(p==NULL)
	{
		printf("error!");
		return 1;
	}
	int i=0;
	for(i=0;i<10;i++)
	{
		*(p+i)=i+1;
	}

	//括容
	int *ptr=realloc(p,80);
	if(ptr==NULL)
	{
		printf("error!！");
		return 1;
	}
	else p=ptr;

	for(i=0;i<20;i++)
	{
		printf("%d\n",*(p+i));
	}
	free(p);
	p=NULL;

	//realloc(NULL,40);等价于malloc(40);
	return 0;
}
