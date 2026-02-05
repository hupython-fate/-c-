//线性表分为顺序表和链表，而这两种我都不同程度的学过了。
//而栈和队列却没有学过。
//栈和队列是一种插入和删除只能在端点处的线性表。
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define OK 1
#define TRUE 1
#define FALSE 0
//#define OVERFLOW 0
typedef struct{
	int a;
}selem_type;

typedef struct{
	selem_type *base;//栈底指针
	selem_type *top;//栈定指针
	int stacksize;//栈的最大容量，不是元素个数。
}sqstack;

/*
栈中元素个数等于：top-base；
栈满，就是stacksize==栈的元素个数。
*/

//selem_type是自定义数据类型。

int initstack(sqstack *q)//构造一个空栈。
{
	q->base=(selem_type*)malloc(sizeof(selem_type)*MAX);
	//使用动态内存分配函数在堆上分配一个数组。
	if(q->base==NULL)
	{
		printf("error!");
		return 1;
	}//存储分配失败。
	q->top=q->base;//栈顶指针和栈底指针指向同一个元素。
	q->stacksize=MAX;
	return OK;
}

int stackempty(sqstack *q)//判断栈是否为空。
{
	if(q->top==q->base)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int stacklenth(sqstack *q)//返回栈的元素个数。
{
	return q->top-q->base;
}

int clearstack(sqstack *q)//清空顺序栈
{
	if(q->base) q->top=q->base;
	return OK;
}

int destroystack(sqstack *q)//销毁顺序栈
{
	if(q->base)
	{
		free(q->base);//这一步是把分配的内存释放；
		q->base=q->top=NULL;//这两句是在把结构体成员给清空。
		q->stacksize=0;
	}
	return OK;
}//销毁和清空的区别在于销毁会把分配的内存空间给释放。

//接下来就是顺序栈最重要的操作了，那就是入栈和出栈。
int push(sqstack *p,selem_type e)//入栈
{
	/*
	第一步，判断是否栈满，若满则出错（上溢）。
	第二步，把元素e压入栈定。
	第三步，栈顶指针加1
	*/
	if(p->top - p->base < p->stacksize)
	{
		*(p->top)=e;
		p->top++;
		/*
		以上两句可以合并成一句
		*(p->top)++=e;
		*/
	}
	else
	{
		printf("stack overflow!");
		return 1;
	}
}

int pull(sqstack *q,selem_type e)//出栈
{
	/*
	第一步，判断栈是否为空，如果为空则返回错误。不为空进行第二步。
	第二步，将top指针下移一位，也就是减一。
	第三步，把top指针所指向的元素赋值给e；
	*/
	if(q->top!=q->base)
	{
		e=*--(q->top);
		return 0;
	}
	else
		return 1;
}


int main(void)
{
	sqstack *q=(sqstack*)malloc(sizeof(sqstack));
	initstack(q);//经过这个函数，指针p会表示一个空栈。
	printf("%d",stackempty(q));
	return 0;
}