#include <stdio.h>
int main() {
    //continue的意思是跳过执行本次循环的余下内容，直接开始下一次循环。
    for (int k=1;k<=10;k++){
        if(k%2==0){
            continue;//这段代码的意思是，如果是偶数就跳过，也就是说，打印出1~10之间的积数。
        }
        printf("%d\n",k);
    }
    return 0;
}