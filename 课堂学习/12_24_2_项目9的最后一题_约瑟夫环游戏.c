#include <stdio.h>
#include <stdlib.h>

int a,b,c;//定义三个全局变量。

struct people
{
	int people;
	struct people *next;
};

//第一个函数，创建循环链表
struct people *list()//指针函数，返回类型为指针
{
	int i;
	struct people *head,*q,*p;
	if((head=(struct people *)malloc(sizeof(struct people)))==NULL)
	{
		printf("error!!");
		return 0;
	}
	//创建第一个结点。
	head->next=NULL;
	head->people=1;
	q=head;
	for(i=1;i<a;i++)//a是几，就创建几个结点
	{
		//printf("aaaaaaaa\n");
		if((p=(struct people *)malloc(sizeof(struct people)))==NULL)
		{
			printf("error!!");
			return 0;
		}
		//用循环为每一个人赋予编号
		p->people=i+1;
		//然后，改变指针的指向
		q->next=p;
		q=p;
	}//也就说，这是一个循环链表,应首尾相联
	q->next=head;
	return head;//本质上会创造a+1个结点，头结点的数据域为空。
}

//第二个函数，查看第一个函数的运行效果
void print(struct people *head)//打印出来看看效果
{
	int i=0;
	for(i=0;i<a;i++)
	{
		printf("第%d人编号为%d\n",i+1,head->people);
		head=head->next;
	}
}

//接下来就是开始用这个循环链表开始报数
//第三个函数，报数，返回报完数之后的指针
struct people *baoshu(struct people *head)
{
	struct people *p=head;
	int i;
	for(i=1;i<b;i++)
		p=p->next;
	return p;
}

//最后，也是最关键的子函数，把每一个出列的人的编号打印出来，最后把获胜的人的编号打印出来。
void del(struct people *head)
{
	int i,j;
	struct people *q,*p;
	q=p=baoshu(head);
	for(i=1;i<=a;i++)//循环次数为a次
	{
		for(j=1;j<c;j++)//计算是谁出列
		{
			p=q;
			q=q->next;
		}
		p->next=q->next;//进行删除，把q指向的前后两个结点联接起来。
		if(i<a)
			printf("第%d个出列的人为%d\n",i,q->people);
		else
			printf("最后赢的人是%d\n",q->people);
		q=p->next;
	}
}

void input()//第五个函数，获取用户的输入的函数。
{
	printf("=============欢迎来到约瑟夫环游戏！==============\n");
	printf("请问有多少人会参与这个游戏？:");
	scanf("%d",&a);
	printf("请问想要从第几个数开始报数？：");
	scanf("%d",&b);
	while(1)
	{
		printf("请问数到几的出列？：");
		scanf("%d",&c);
		if(c>a || c<0) 
		{
			printf("您的输入错误！\n");
			printf("请输入正确的数！\n");
			continue;
		}
		break;
	}
}

int main(void)//主函数集中调用。
{
	struct people *q;
	input();
	q=list();
	del(q);
	//print(q);
	return 0;
}

/*
 *约瑟夫环游戏实在是一个有趣的游戏，这个游戏有三个变量，一是参与这个游戏的人数，二是从那个编号开始数，三是数到几出列。
 也就是说，要让用户输入参与这个游戏的人数，开始数的编号，以及数到几出列。
 最后的输出结果,应该是一个编号，也就是说，输出赢家的编号。
 *
 * 不过，这个游戏的三个变量一旦确定，那么赢家的编号也就确定了，也就是说，这是一个函数解析式，f(x,j,k)=会等于什么？
 * */
