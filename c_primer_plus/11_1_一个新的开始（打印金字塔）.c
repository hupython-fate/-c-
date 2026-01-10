#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("请输入你想要的金字塔层数：");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
       	 for(c=0;c<a-b;c++)
           printf(" ");
      	 for(c=0;c<2*b-1;c++)
           printf("*");
     	 printf("\n");   
 }
    return 0;
}
