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
	print(qq);
	return 0;
}

struct zheng *input(int x)
{
	int i=0;
	struct zheng *q,*p,*head;
	if((head=(struct zheng*)malloc(sizeof(struct zheng)))==NULL)
	{
		printf("error!");
		return 0;
	}//创建第一个结点。
	
	head->next=NULL;
	q=head;
	for(i=0;i<x;i++)
	{
		if((p=(struct zheng*)malloc(sizeof(struct zheng)))==NULL)
		{
			printf("error!!");
			return 0;
		}
		scanf("%d",&p->a);
		if((p->a)<0)
		{
			p->next=NULL;
			break;
		}
		q->next=p;//虽然这里head和q的指向是一样的，但是这里不能用head代替q，因为这里会循环。
		q=p;
	}
	p->next=NULL;//这里用q或者用p都可以，因为这是单向链表，而且没有循环，如果是循环链表的话，应该把最后一个结点的指针域装入head结点的指针。
	return head;
}

void print(struct zheng *p)
{
	p=p->next;
	while(p!=NULL)
	{
		printf("%d   ",p->a);
		p=p->next;
	}
}
