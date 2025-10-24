#include <stdio.h>
int main() {
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("请输入你想要输入的数字:\n");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("arr数组的第%d个值为%d。\n",i,arr[i]);
    }
    return 0;
}