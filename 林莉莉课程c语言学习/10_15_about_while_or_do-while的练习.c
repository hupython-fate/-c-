#include <stdio.h>
int main() {
    int a=1;
    int b=1;
    int c=0;
    int d=0;
    while(a<=100){
        if (a%2==0){
            printf("这个数为偶数：%d\n",a);
            c=c+a;
            
        }
        a=a+1;
    }
    printf("1到100之间所有偶数的和是:%d\n",c);
    printf("      \n");
    do{if(b%2==0){
        printf("这个数是偶数；%d\n",b);
        d=d+b;
        
    }
    b=b+1;
    }while(b<=100);
    printf("1到100之间所有偶数的和是:%d\n",d);

    return 0;
}