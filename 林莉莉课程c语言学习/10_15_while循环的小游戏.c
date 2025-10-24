#include <stdio.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001);
    double shu_zi=0;
    printf("请输入一个在0~20内的整数数字;\n");
    printf("当输入的数正确时，会有一句彩蛋。\n并结束程序:");
    scanf(" %lf",&shu_zi);
    while(shu_zi!=18){
        printf("您输入的数字是%lf\n",shu_zi);
        scanf(" %lf",&shu_zi);
    }
    printf("恭喜你，你就是本年度最美的美人！");
    printf("程序结束运行。");
    return 0;
}