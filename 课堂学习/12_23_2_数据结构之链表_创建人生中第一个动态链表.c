#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
};


struct node *creatlist(int k)//这个函数的返回类型应该是什么？不应该是void,而应该是strcut node:
{
	//创建设链表的思路我明白了，也就是说，先创建一个结点1,让指针变量1和指针变量2同时指向结点1,然后再创建结点2,让指针变量3指向结点2,之后向结点2的数据域存数据，之后让结点1的指针域存结点2的指针，让指针变量2从指向结点1变成指向结点2.要存多少个数据，就把这样的过程循环多少次
	struct node *head,*p,*q;
	int i=0;
	if((head=(struct node*)malloc(sizeof(struct node)))==NULL)
	{
		printf("error!!!");
		return 0;//如果创建结点失败，就会直接结束函数的运行
	}
	//如果能执行到这，也就是说，结点创建成功了。
	//head所存的指针，所指的就是所创的内存空间。
	p=head;//让第二个指针变量存储结点1的地址。
	
	//接下来就是创建新的结点，第一个结点的数据域应该为空，并且，为了安全，第一个结点的指针域应该为NULL。
	head->next=NULL;
	head->data=0;

	for(i=0;i<k;i++)//这里没有获取用户的输入，我直接规定了要创建5个结点。
	{
		if((q=(struct node*)malloc(sizeof(struct node)))==NULL)//创建结点的同时进行异常判断，妙啊。哈哈
		{
			printf("error!!!");
			return 0;
		}
		//要获取用户的输入
		scanf("%d",&q->data);

		//q的指向是新的结点,也就是说，应该要把新的结点的指针放在上一个结点的next成员中
		p->next=q;//这里是用p而不是head，p代表上一个结点，q代表现在的结点
		//然后呢？要让p的指向发生改变，要让p指向现在的结点。
		p=q;//
	}

	//然后呢？循环5次之后？
	//最后一个结点的指针域应该为空，如果把它设成head的地址，那么就不是单链表，而是首尾项相联的环链表。
	
	//所以，要设成NULL
	q->next=NULL;//这里换成p->next=NULL也是一样的；
	return head;
}

//打印出这个链表
//链表和python里的列表，是什么关系？

void printlist(struct node *as)
{
	int i=0;
	as=as->next;
	while(as->next!=NULL)
	{
		printf("%d  ",as->data);
		as=as->next;
	}
}

int main(void)
{
	int k=0;
	printf("请问您要输入多少个数：");
	scanf("%d",&k);
	printf("请输入%d个整数：",k);
	struct node *l=creatlist(k);
	printlist(l);
	return 0;
}
