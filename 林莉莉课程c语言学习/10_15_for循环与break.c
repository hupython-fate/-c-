#include <stdio.h>
int main() {
    int menny=2000;
    for(int i=1;i<=10;i++){//执行十次循环。
        if(menny<=4000){
            printf("这个月要存1000元。\n");
        }
        else{
            printf("存够了。\n");
            break;}//跳过执行循环。是erbak的意思。
        menny=menny+1000;//重新给menny赋值，
        //第二次循环的时候，menny的值就变成了3000.然后又给menny重新赋值。
        //这个循环实际上一共执行了四次。
    }
    return 0;
}