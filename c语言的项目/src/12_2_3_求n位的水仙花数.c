#include <stdio.h>
#include <math.h>

//什么是水仙花数？就是一个n位正整数（n>=3）,它的每个位上的数字的n次幂之和等于它自己。
    //比如，153=pow(1,3)+pow(5,3)+pow(3,3);
int main(void)
{
    int n,j,asd=0,k=0;
    long long i;
    int x[7]={0};
    
    while(1)
    {
        printf("请输入位数（3<=n<=7）：");
        scanf("%d",&n);
        //假设输入3
        //假如输入的是3,那么就是111,如果是4,就是1111,如果是5,就是11111.
        //这是一个求函数解析式的题目。
        //（3,111），（4,1111），（5,11111）。
        //y=(pow(10,x)-1)/9
         if(n<3 || n>7)
        {
            printf("您输入的数不符合要求，请重新输入！\n");
            continue;
        }
        else break;
    }//这一部分是没有问题的。


     

// 计算下界和上界
long long min = 1;
for(int k = 1; k < n; k++) min *= 10;  // min = 10^(n-1)
long long max = min * 10 - 1;  // max = 10^n - 1

    printf("遍历的范围是%d~~%d!\n",min,max);

    //int aaaaa=1;

    for(i=min;i<=max;i++)//这里的条件要改，避免内存访问失败。//已改。
    {
        //首先，用一个临时变量来存储要操作的值。
        //printf("%d",i);
        long long ling=i;
        asd=0;
        //然后把要操作的数的每一位用数组存起来。
        int kk=0;
        while(ling>0)//这是一个死循环。//已改
        {
            x[kk]=ling%10;
            ling=ling/10;
            kk++;
        }

        //printf("%d,数组存放没有问题！",asd);
        //要用循环把存在数组中的每一位的数的n幂次之和计算出来

        for(j=0;j<n;j++)
        {
            //asd=asd+pow(x[j],n);
            //不能用pow，可以用整型计算，避免浮点误差。
            long long ppp=1;
            for(k=0;k<n;k++)
            {
                ppp*=x[j];
            }
            asd+=ppp;
        }
        ling=i;
        if(asd==ling)
        printf("%d\n",ling);
    //aaaaa++;
    }  
    //怎么求位数？其实也很简单，用一个一维数组加上% /就可以了。
    //比如说153%10==3,15%10==5,1%10==1,而如果都是整型数据，那么153/10==15。
    return 0;
}