#include <stdio.h>
/*
链栈是操作受限的单链表，只能在链表头部进行操作。
因为它是单链表，所以它的结构类型定义和链表是一样的。
*/

typedef struct selem_type{
    int a;
}selem_type;

typedef struct node{
    selem_type data;
    struct node *next;
}stacknode,*linkstack;

/*
链表的头指针就是栈顶
不需要头结点
基本不存在栈满的情况
空栈相当于头指针指向空
插入和删除仅在栈顶处执行
*/

//第一个算法，链栈的初始化。
void initstack(linkstack p)
{
    p=NULL;
    return;
}

//第二个算法，判断链栈是否为空
int stackempty(linkstack p)
{
    if(p==NULL)
        return 0;
    else
        return 1;
}

//第三个算法，链栈的入栈
int push(linkstack p,selem_type e)
{
    /*
    第一步，是从内存中分配一块大小为stacknode的空间，赋给指针q。
    第二步，是把e赋值给新分配的空间中的数据域。
    第三步，判断是否为第一个元素，如果是，指针域应该为NULL，如果是不是，指针域应该是上一个结点的地址。
    第四步，栈顶指针存的是上一个结点的地址，如果没有元素就是空，有就是上一个的。
    第五步，q->next=p;//新元素的指针域是上一个的。
    第六步，p=q;
    */
    linkstack q=malloc(sizeof(stacknode));
    if(q==NULL)
    {
        printf("error!");
        return 1;
    }
    q->data=e;
    q->next=p;
    p=q;//修改栈顶指针。
    return 0;
}

int pull(linkstack p,selem_type e)
{
    /*出栈的操作和入栈的操作相反
    第一步，要移动栈顶指针p,使它指向下一个元素。
    第二步，要释放第一个结点，因此，第一步还要定义一个指针变量存原来的地址，还要在释放之前把这个结点的数据域给赋到变量中.
    */
    linkstack q=p;
    if(p!=NULL)
    {
        e=p->data;
        p=p->next;
        free(q);
        q=NULL;
        return 0;
    }
    else
        return 1;
}


//第四个算法，求栈顶元素。
selem_type stack_top(linkstack p)
{
    if(p!=NULL)
    return p->data;
    else return 1;
}

int main(void)
{
    linkstack p;
    return 0;
}