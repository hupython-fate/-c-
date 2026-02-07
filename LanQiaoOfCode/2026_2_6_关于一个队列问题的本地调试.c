 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  char name[1000][50];
  int front;
  int rear;
}Queue;

void initQueue(Queue *x)
{
  (*x).front=(*x).rear=0;
}

void InQueue(char *str,Queue *x)
{
  //入队从最后面进行
  strcpy((*x).name[(*x).rear],str);
  (*x).rear=((*x).rear+1)%1000;
}

void OutQueue(char *str,Queue *x)
{
  //出队从最前面出
  strcpy((*x).name[(*x).front],"\0");
  (*x).front=((*x).front+1)%1000;
}

void print_Queue(Queue *p)
{
  for(int i=(*p).front;i<(*p).rear;i++)
    printf("%s\n",(*p).name[i]);
}

int main(int argc, char *argv[])
{
  Queue V,N;
  initQueue(&V);
  initQueue(&N);
  int m;
  char name[50],f[4],cao[4];
  scanf("%d",&m);

  for(int i=0;i<m;i++)
  {
    scanf("%s",cao);
    if(strcmp(cao,"OUT")==0)
      scanf("%s",f);
    else
      scanf("%s %s",name,f);

    //printf("%s %s %s\t",cao,name,f);

    if(strcmp(cao,"IN")==0)//这一块是入队操作
    {
      if(f[0]=='V')//VIP病房
      {
        InQueue(name,&V);
        //print_Queue(&V);
      }
      else
      {
        InQueue(name,&N);
        //print_Queue(&N);
      }
    }
    else//这一块是出队操作
    {
      if(f[0]=='V')
      {
        OutQueue(name,&V);
        //print_Queue(&V);
      }
      else
      {
        OutQueue(name,&N);
        //print_Queue(&N);
      }  
    }
  }

  print_Queue(&V);
  print_Queue(&N);
  return 0;
}

//问题己解决。