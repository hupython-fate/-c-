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
    Queue_ptr q=(Queue_ptr)malloc(sizeof(Queue_node));
    q->x=e;//填数据域
    q->next=NULL;//填指针域
    (*p).rear->next=q;
    (*p).rear=q;//改变队尾指针的位置。
}

//第三个算法,出队
void OutQueue(linkQueue *p,elemt_type e)
{
    /*从队头出队，先把要出队的元素的数据域赋给e，然后再用一个指针变量存现在的头指针的地址，然后让头指针后移一位，再释放掉原来的头结点。*/
    if((*p).front==(*p).rear) return;
    e=(*p).front->next->x;
    Queue_ptr ling_shi=(*p).front->next;//用临时变量存原来中间结点的地址。
    (*p).front->next=(*p).front->next->next;//删除中间的结点。
    if(ling_shi==(*p).rear) (*p).rear=(*p).front;//如果要删除的结点是最后一个结点，那么还要修改尾结点的指先。
    free(ling_shi);//释放原来的中间的结点
    ling_shi=NULL;
}

//第四个算法，销毁链队列
void xioa_hui_Queue(linkQueue *p)
{
    /*
    从头结点开始，依次释放所有的结点。
    */
    while((*p).front!=NULL)
    {
        Queue_ptr x=(*p).front;
        (*p).front=(*p).front->next;
        free(x);
        x=NULL;
    }
}

//第五个算法，求链队列的队头元素
elemt_type qiu_q_head(linkQueue *p)
{
    if((*p).front!=(*p).rear)
    return (*p).front->next->x;
}

int main(void)
{
    linkQueue p;//声明一个链队列。
    initQueue(&p);//初始化。
    return 0;
}

/*学完了，栈和队列学完了。哈哈哈哈，这是一个非常重要的里程碑啊。*/