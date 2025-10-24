/*
for (初始表达式；条件表达式；更新表达式){
要循环执行的代码。
}
*/

//k=k+1 可以简写成k++ ,k=k-1 可以简写成k--  。
#include  <stdio.h>
int main() {
    for(int i=1;i<=100;i=i+1){
        printf("%d\n",i);
    }
    return 0;
}