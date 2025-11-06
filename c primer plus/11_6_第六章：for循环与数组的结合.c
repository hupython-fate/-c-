#include <stdio.h>
#define shu 6
int main(void)
{//我打算用for循环和数组重新编写之前的一个程序．
//算法真是程序的灵魂啊！
    float cheng[10];
    int a,b,c;
    float ping;
    float sum=0.0;
    for(a=0;a<shu;a++)
    {
        printf("请输入学生的第%d门成绩：",a);
	scanf("%f",&cheng[a]);
    }
    for(a=0;a<shu;a++)
    {
        sum+=cheng[a];
    }//使用累加法计算总成绩．
    ping=sum/shu;
    printf("学生的总成绩为%.2f,平均成绩为%.2f.",sum,ping);
//简洁，优美！
 return 0;
//刚才冒出的想法是冒泡法（交换变量的值）进行排序．
}
