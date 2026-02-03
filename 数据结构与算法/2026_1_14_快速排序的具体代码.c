#include <stdio.h>
#include <stdlib.h>

void jiao(int *a,int *b)
{
  int ttt;
  ttt=*a;
  *a=*b;
  *b=ttt;
}

int sort_1(int *arr,int qi,int n)//分区函数
{
  int j=qi-1,jizun=arr[n];//最后一个元素为基准值
  for(int i=qi;i<n;i++)
    if(arr[i]<=jizun)
    {
      j++;
      jiao(&arr[i],&arr[j]);
    }
  jiao(&arr[j+1],&arr[n]);
  return j+1;
}

void sort(int *arr,int qi,int n)
{
  if(qi<n)
  {
    int zhengji=sort_1(arr,qi,n);
    sort(arr,qi,zhengji-1);//排序左半边
    sort(arr,zhengji+1,n);//排序右半边
  }
}
//比如数组7 1 4 8 5 2,长度为6.
//在sort_1函数中，qi=0,n=6-1=5.
//j=0-1=-1;jishu=2
//i=0;0<5为真，arr[0]==7>jishu.i++
//i=1;1<5为真，arr[1]==1<jishu.j++后，j=0;
//交换0和1的数据，新的数组为1 7 4 8 5 2
//i++;
//i=2;2<5为真，arr[2]==4>jishu.i++
//i=3;3<5为真，arr[3]==8>jishu.i++
//i=4;4<5为真，arr[4]==5>jishu.i++
//i=4;5<5为假，交换arr[j+1]==>arr[0+1]==>arr[1]和arr[5]的数据。
//新的数组为2 7 4 8 5 1
//sort_1返回1.
//进入sort内，sort(arr,0,0);
//0<0为假，递归终止。


int main(int argc, char *argv[])
{
  int n,i,j,arr[101];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  
  //要设一个分界值吗？
  //把最后一个元素设为分界值，
  //用函数递归吗
  sort(arr,0,n-1);

  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
