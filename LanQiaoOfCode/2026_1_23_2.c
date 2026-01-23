#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int x;
  struct node *next;
  struct node *shang;
}node,*linklist;

void caretlist(linklist p)//创建设一个循环双链表。
{
  linklist q,e;
  for(int i=0;i<10;i++)
  {
    if(i==0)
    {
      p=(linklist)malloc(sizeof(node));
      p->x=i+1;
      q=p;
    }
    else
    {
      e=(linklist)malloc(sizeof(node));
      q->next=e;
      e->shang=q;
      q=e;
      e->x=i+1;
    }
  }
  e->next=p;
  p->shang=e;
}

void yi_dong(linklist p,linklist y)//p指向数据域为x的结点，y指向数据域为首元素的结点
{
  p->shang->next=p->next;//p的上一个结点的指针域指向p的下一个结点
  p->next->shang=p->shang;//p的下一个结点的的指针域上指向p的下一个结点
  //这相当于把p这个结点删除了

  y->shang->next=p;
  p->shang=y->shang;
  y->shang=p;
  p->next=y;
  //把这个结点给重新接了回来。
}

int main(int argc, char *argv[])
{
  linklist p;
  caretlist(p);
//	printf("sss\n");
  int m,x;
  linklist y;
  scanf("%d",&m);

  //printf("sss\n");
  for(int i=0;i<m;i++)
  {
    scanf("%d",&x);
    printf("%d\n",x);
    y=p;
    while(p->x!=x)
    {
      p=p->next;
      printf("ss\n");
    }
    yi_dong(p,y);
    
    for(int j=0;j<10;j++)
    {
      printf("%d ",p->x);
      p=p->next;
    }
  }
  return 0;
}
