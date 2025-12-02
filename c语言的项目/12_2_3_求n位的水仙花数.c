#include <stdio.h>
#include <math.h>

int n,j,i;
int x[7]={0};
 
void getchars()
{
    while(1) 
    {
        if(getchar()=='\n')
        continue;
        if(getchar()!='\n')
        break;
    }
}

/*int sui(int n,int kk)//kk也是用户输入的位数。//这是为了实现输入n的值等于几，就使几个pow相加，这是函数递归的尝试。
{
    int lin[n+1]=pow(x[n],kk);
    sui(n-1,kk);
    return sui[0];
    //if(n==0) return;


}*/

int main(void)
{
    //什么是水仙花数？就是一个n位正整数（n>=3）,它的每个位上的数字的n次幂之和等于它自己。
    //比如，153=pow(1,3)+pow(5,3)+pow(3,3);
    while(1)
    {
        printf("请输入位数（3<=n<=7）：");
        //getchars();
        scanf("%d",&n);//假设输入3
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


    //9*((pow(10,n)-1)/9)不就等于pow(10,n)-1嘛！


// 计算下界和上界
long long min = 1;
for(int k = 1; k < n; k++) min *= 10;  // min = 10^(n-1)

long long max = min * 10 - 1;  // max = 10^n - 1
/*
// 对于3位数及以上
for(i = min; i <= max; i++) {
    // 你的水仙花数判断逻辑
}*/





    for(i=min;i<=max;i++)//这里的条件要改，避免内存访问失败。
    {
        int cc=i;
        for(j=0;j<n;j++)//输入的是几位数，就求几个数。
        {
            x[j]=cc%10;//153%10==3
            cc=i/10;//153/10==15.
            switch(n)
            {
                case 3:
                    if(i==pow(x[0],n)+pow(x[1],n)+pow(x[2],n))//这里有几个pow相加，是由n决定的，n=3,就是三个pow相加。所以这里也要改。
                    printf("%d\n",cc);
                    break;
                case 4:
                    if(i==pow(x[0],n)+pow(x[1],n)+pow(x[2],n)+pow(x[3],n))//这里有几个pow相加，是由n决定的，n=3,就是三个pow相加。所以这里也要改。
                    printf("%d\n",cc);
                    break;
                case 5:
                    if(i==pow(x[0],n)+pow(x[1],n)+pow(x[2],n)+pow(x[3],n)+pow(x[4],n))//这里有几个pow相加，是由n决定的，n=3,就是三个pow相加。所以这里也要改。
                    printf("%d\n",cc);
                    break;
                case 6:
                    if(i==pow(x[0],n)+pow(x[1],n)+pow(x[2],n)+pow(x[3],n)+pow(x[4],n)+pow(x[5],n))//这里有几个pow相加，是由n决定的，n=3,就是三个pow相加。所以这里也要改。
                    printf("%d\n",cc);
                    break;
                case 7:
                    if(i==pow(x[0],n)+pow(x[1],n)+pow(x[2],n)+pow(x[3],n)+pow(x[4],n)+pow(x[5],n)+pow(x[6],n))//这里有几个pow相加，是由n决定的，n=3,就是三个pow相加。所以这里也要改。
                    printf("%d\n",cc);
                    break;  
            }
            
        }
    }  
    //怎么求位数？其实也很简单，用一个一维数组加上% /就可以了。
    //比如说153%10==3,15%10==5,1%10==1,而如果都是整型数据，那么153/10==15。
    return 0;
}