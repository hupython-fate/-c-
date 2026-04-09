
/*问题描述

给定一个数组 AA 和一些查询 Li,RiLi​,Ri​, 求数组中第 LiLi​ 至第 RiRi​ 个元素之和。*/

//#include <iostream>
//using namespace std;
//
#include <stdio.h>


int hanshu(int*,int*,int*,int,int,int);//函数的声明


int main()
{
  int x,y,i,j=0;
  int arr[100]={0};
  int aa[100]={0};
  int bb[100]={0};
  int hhhh=0; 
  int sss=0;//中间变量

  scanf("%d",&x);// 用户要输入的数
  for(i=0;i<x;i++)
    scanf("%d",&arr[i]);

  scanf("%d",&y);//查询的数目
  for(i=0;i<y;i++)
    scanf("%d %d",&aa[i],&bb[i]);

  for(i=0;i<y;i++)//也就是说，实现这个题目，一共需要两个函数，一是用来求和的函数，二是用来排序，以求得最大值的函数。
  {

    hhhh=hanshu(arr,aa,bb,x,y,j);
    sss+=hhhh;
    j++;
  }


  //这样第一步就实现了吗？
  //理论上，此时sss的值，就是原本没有排序的求和问题的答案。
 	printf("%d",sss); 
  return 0;
}

//第一个函数，用来求和的。
int hanshu(int arr[],int a[],int b[],int x,int y,int j)
{
  int i,c,d,as,kk=0;

  //要充分利用这个函数，关建是j的值，j的值要不断变化，才能让每次循环执行的函数返回值发生变化

  for(i=0;i<x;i++)//求下标的第一个循环
  {
    for(;j<y;j++)
    {
      if(a[j]==arr[i])
      {
        //printf("%d",i);//此时i的值是第一个下标
        c=i;
        break;
      }
    }
    break;//这意味着求第一个满足条件的数的下标
  }
  for(i=0;i<x;i++)//求下标的第二个循环
  {
    for(;j<y;j++)
    {
      if(b[j]==arr[i])
      {
        //printf("%d",i);//此时i的值是第二个下标
        d=i;
        break;
      }
    }
    //这里没有写break，意味着求最后一个满足条件的数的下标
  }

  //然后计算第一个下标到第二个下标的和。
  if(c>d)
  {
    as=c;
    c=d;
    d=as;
  }//也就是说，c一定更小

  for(;c<=d;c++)//根据求得的下标，求出对应的和
  {
      kk+=arr[c];
  }

  //这样，就实现了第一个累加，但是还有y个累加等着。
  //可以把着封装成函数。
  return kk;
}

