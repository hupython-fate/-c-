#include <stdio.h>
#include <stdlib.h>
//创建一个存放正整数的单向链表，输入负数作为结束标志，然后依次输出链表元素。
struct zheng
{
	int a;
	struct zheng *next;
};

struct zheng *input(int);//函数的声明
void print(struct zheng *p);//函数的声名

int main(void)
{
	int kk;
	printf("请问你想输入几个数？：");
	scanf("%d",&kk);

	struct zheng *qq=input(kk);
	return 0;
}
