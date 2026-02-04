#include <stdio.h>
int main() {
    int n=0;
    do{printf("第%d天,我是一个帅哥！\n",n);}while(n==2);
    return 0;
}
//do-while循环与while循环不同，无论条件是否为真，花括号内的代码至少会执行一次！