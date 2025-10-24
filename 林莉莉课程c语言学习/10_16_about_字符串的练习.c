#include <stdio.h>
int main() {
    int n;
    char name[16];
    printf("请输入想要打招呼的总人数：");
    scanf("%d",&n);
    for(int a=0;a<n;a++){
        printf("请输入一个中文名：\n");
        scanf("%15s",name);
        printf("%s,你好！\n",name);
    }
    return 0;
}//输入中文，输出的却不是中文，这是为什么？