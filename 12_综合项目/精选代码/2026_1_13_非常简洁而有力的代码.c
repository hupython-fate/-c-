#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a=0;
  scanf("%d",&a);
  getchar();
  while(a--)
  {
    int h=0,l=0;
    scanf("R%dC%d",&h,&l);
    getchar();
    char s[10]="";
    int i=8;
    while(l)
    {
      s[i--]=l%26+'A'-1;
      l/=26;
    }
    int j=0;
    i++;
    while(s[i])
    {
      s[j++]=s[i++];
    }
    s[j]='\0';
    printf("%s%d\n",s,h);
  }
  return 0;
}
/*题目描述

Excel 是最常用的办公软件。每个单元格都有唯一的地址表示。比如：第 12 行第 4 列表示为："D12"，第 5 行第 255 列表示为"IU5"。

事实上，Excel 提供了两种地址表示方法，还有一种表示法叫做 RC 格式地址。第 12 行第 4 列表示为："R12C4"，第 5 行第 255 列表示为"R5C255"。

你的任务是：编写程序，实现从 RC 地址格式到常规地址格式的转换。
输入描述

用户先输入一个整数 n （n<100）n （n<100），表示接下来有 nn 行输入数据。

接着输入的 nn 行数据是 RC 格式的 Excel 单元格地址表示法。
输出描述

程序则输出 nn 行数据，每行是转换后的常规地址表示法。
输入输出样例
示例

    输入

用户输入：
2
R12C4
R5C255
[copy]

    输出

D12
IU5
[copy]

运行限制

    最大运行时间：1s
    最大运行内存: 256M*/


//这就是高手应有的代码啊，简单而有力。
