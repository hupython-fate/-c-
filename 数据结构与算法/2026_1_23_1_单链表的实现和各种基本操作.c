#include <stdio.h>

typedef struct{
	char name[20];
	char id[20];
	char man[20];
}people;

typedef struct node{
	people date;
	struct node *next;
}node,*linklist;

//第一个基本操作，链表的初始化
//
int initlink(linklist &p)//为什么要加取地址符？&在这里不是取地址的意思，而是引用的意思吗？
{
	p=(linklist)malloc(sizeof(node));//生成一个新的结点，
	p->next=NULL;//把指针域置空。
	return OK;
}
//一个补充的算法操作。
int pan_none(linklist p)
{
	if(p->next)//为空的话就是0,也就是假，这一块的内容就会不执行。
		return 0;//返回0的话，就是链表不为空。
	else 
		return 1;//返回1的话，就是链表为空。

}
//第二个补充的算法，销毁单链表
//算法的思路是从头结点开始，依次释放所有结点。
int  xiao_hui(linklist p)
{
	while(p!=NULL)
	{
		linklist qq=p;
		p=p->next;
		free(qq);
		qq=NULL;
	}
	return OK;
}

//第三个补充算法，清空单链表
//
int qing_kong(linklist p)
{
	linklist k=p->next;
	while(k!=NULL)
	{
		linklist q=k->next;//q指向要消毁的结点的下一个结点的地址
		free(k);
		k=q;
	}
	p->next=NULL;
	return OK;
}

//第四个补充的算法
//求链表的表长.
int qiu_biao_chang(linklist p)
{
	//因为这个链表是带头结点的,而表长就是有多少个数据元素,所以,不能把头结点计入其中.
	//用for循环吧,有天然的计数器.
	int i;
	p=p->next;
	for(i=0;p!=NULL;i++)
		p=p->next;
	return i;
}


//以下是很重要的算法,是链表的高级操作的基础.
//
//1,取值,取单链表中第i个元素的值.
//
people qu_zhi(linklist p,int x)//返回类型应为自己规定的那一种.
{
	int i=0;
	linklist q=p;
	for(i=0;i<x && q!=NULL;i++)
	{
		q=q->next;
	}
	people k=q->date;
	return k;
}
//2,查找,给定某个数据,返回这个数据的地址或者序号.
//也就是,按值查找.
//


int main(void)
{
	linklist l;//定义一个指针，指向头结点的指针。
	initlink(l);//对这个指针进行初始化，生成一个空链表。
	return 0;
}
