/*c语言有三大重点和难点，分别是指针，结构体，动态内存管理。
 *
 * 这三者是学习数据结构的基础，优其是动态内存管理和指针。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
int main(void)
{
	int i=0;
	int *p=(int *)malloc(sizeof(int)*INT_MAX);
	if(p==NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	for(i=0;i<40;i++)
	{
		*(p+i)=i;
	}
	for(i=0;i<40;i++)
	{
		printf("%d",*(p+i));
	}
	free(p);
	p=NULL;
	return 0;
}
