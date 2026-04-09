#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[])
{
  int n,i;
  char str[100][100];
  //printf("用户输入：");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%s",str[i]);

  /*for(i=0;i<n;i++)
    printf("%s\n",str[i]);*///输入部分正常

  for(i=0;i<n;i++)//获取行数和列数
  {
    int hang=0,lie=0,z,s,j,d;
    int arr[100];
    int k=strlen(str[i]);
    for(j=0;j<k;j++)
    {
       if(str[i][j]=='R')
      {
        for(z=j+1,s=0;str[i][z]!='C';z++,s++)
          arr[s]=str[i][z];
        for(d=s-2;d>=0;d--)
          hang+=arr[d]*pow(10,d-1);
       }
       if(str[i][j]!='C')
       {
         for(z=0;str[i][z]!='\0';z++)
           arr[z]=str[i][z];
         for(d=z-2;d>=0;d--)
          lie+=arr[d]*pow(10,d-1);
       }
       //行数和列数求出来了，就可以把求出的行数和列数转化为第1种表示方法。
    }
    //以下为把行数和列数转化为第一种表示方法的具体代码
    printf("行：%d 列：%d\n",hang,lie);
  }
  
  return 0;
}
