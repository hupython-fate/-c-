//模式匹配
#include <stdio.h>
int main() {
    int k;
    printf("请输入1或2：");
    scanf("%d",&k);
    switch(k){
        case 1:
        printf("我是一个大美女！");
        break;
        case 2:
        printf("我是一个大帅哥！");
        break;
        default:
        printf("我既不是一个美女，也不是一个帅哥，就是一个很普通的人。");
    }
    return 0;
}