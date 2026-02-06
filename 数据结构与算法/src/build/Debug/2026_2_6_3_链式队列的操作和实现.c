#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int a;
}elemt_type;

typedef struct node{
    elemt_type x;
    struct node *next; 
}Queue_node,*Queue_ptr;

typedef struct {
    Queue_ptr front;//头指针
    Queue_ptr rear;//尾指针
}linkQueue;

//第一个算法，初始化
void initQueue(linkQueue *p)
{
    (*p).front=(*p).rear=(Queue_ptr)malloc(sizeof(Queue_node));//传递地址，再解引用。
    (*p).front->next=NULL;//和(*p).rear->next=NULL;的意思是一样的。
}

//第二个算法，入队
void EnQueue(linkQueue *p,elemt_type e)
{
    /*
    首先要判断队列满不满，不过因为这是链队列，很少存在满的情况，所以不需要判断。
    然后在申请一块内存空间，用(*p)->rear指向它。
    申请时，内存空间的类型应为Queue_node.或者Queue_ptr,不过两者都是一样的意思。
    然后，把要入队的数据赋给新结点的数据域。
    */

    Queue_ptr p=(Queue_ptr)malloc(sizeof(Queue_node));
    if((*p).rear!=NULL)//不是头一个入队的元素
    {
        (*p).rear->next=p;
        (*p).rear=p;
    }
    else//如果是第一个入队的元素。
    {
        (*p).rear=p;
    }
    (*p).rear->x=e;
}

//第三个算法,出队
void OutQueue(linkQueue *p,elemt_type e)
{
    /*从队头出队，先把要出队的元素的数据域赋给e，然后再用一个指针变量存现在的头指针的地址，然后让头指针后移一位，再释放掉原来的头结点。*/
    if((*p).front==NULL) return;
    e=(*p).front->x;
    Queue_ptr ling_shi=(*p).front;//用临时变量存原来的地址。
    (*p).front=(*p).front->next;//头指针后移
    free(ling_shi);//释放原来的头结点
    ling_shi=NULL;
}



int main(void)
{
    linkQueue p;//声明一个链队列。
    initQueue(&p);//初始化。
    return 0;
}