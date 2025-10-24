#include <stdio.h>
int main() {
    for(int f=1;f<=50;f++){
        if(f%2==0){
            if(f%3!=0){
                if(f>40){break;}//当遇到第一个大于40的偶数，退出循环。
                printf("%d\n",f);
    }
    }
    }
    return 0;
}
//一题可以多解，同一个问题可以用不同的算法解决。
//如下：
/*
#include <stdio.h>
int main() {
    for(int i=1;i<=50;i++){
    if(i%2!=0){continue;}
    if(i%3==0){continue;}
    if(i>40){break;}
    printf("%d\n",i);
    }
    return 0;
}
*/
//这个代码可以和我写的代码解决相同的问题，但毫无疑问是林莉莉的解法更好，充分的的利用了continue和break.
