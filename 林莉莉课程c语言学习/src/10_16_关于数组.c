#include <stdio.h>
int main() {
    int l[3]={1};//这个数组相当于int ll[3]={1,0,0};
    float kk[3]={96.3};//这个数组相当于float kk[3]={96.3,0.0,0.0};
    char ll[3]={'a'};//这个数组相当于char ll[3]={'a','\0','\0'};
    //   \0   是空字符，ASCII值为零的字符。

    printf("%d",ll[1]);
    //获取数组内的元素，就是数组名[索引值]，如上。和python里的列表很像。
    //想要修改数组内的某个元素，操作如下：
    l[3]=369;
    printf("%d",l[3]);
    return 0;
}