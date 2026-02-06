#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct {
    int a;
}qelem_type;//自定义的数据类型

typedef struct {
    qelem_type *base;//需要初始化的动态分配的数组。
    int front;//头指针，表示队头的下标
    int rear;//尾指针，标示队尾的下标
}sqQueue;//顺序队列的数据类型定义。

/*
顺序队列的数据类型定义和顺序表相似，不过比顺序表多了一个成员。
*/
//平时最常用的队列是顺序循环队列。
//之所以要用顺序循环队列，是要解决假上溢的问题，充分利用自己向内存中分配的空间。

void initQueue(sqQueue *p)
{
    p->base=(qelem_type*)calloc(MAXSIZE,sizeof(qelem_type));//分配数组空间。
    if(p->base==NULL)
    {
        printf("error!");
        return;
    }
    p->front=p->rear=0;
}

//第二个算法，求队列的长度，也就是队列中的元素的个数。
int Queuelenth(sqQueue *p)
{
    return ((p->rear  -  p->front+MAXSIZE)%MAXSIZE);
}

//第三个算法，入队算法
void EnQueue(sqQueue *p,qelem_type e)
{
    /*
    首先要判断队列是否满了，没有满就入队，满了就结束。
    */
    if((p->rear+1)%MAXSIZE==p->front) return;
        p->base[p->rear]=e;
        p->rear=(p->rear+1)%MAXSIZE;
}

//第四个算法，出队算法
void OutQueue(sqQueue *p,qelem_type e)
{
    /*
    首先要判断队列是否为空，如果为空，那么就结束，如果不为空，那么就出队
    */
    if(p->rear==p->front) return;
    e=p->base[p->front];
    p->front=(p->front+1)%MAXSIZE;
}

//第五个算法，取队头元素
qelem_type Front_Queue(sqQueue *p)
{
    if(p->rear!=p->front)
    return p->base[p->front];
}

int main(void)
{
    sqQueue *p=(sqQueue*)malloc(sizeof(sqQueue));
    initQueue(p);

    return 0;
}

/*
以上就是顺序循环队列的重要基本操作。

*/