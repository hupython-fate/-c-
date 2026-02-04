#include <stdio.h>
int main(){
    char ch='A';
    char* ptr;
    ptr=&ch;//给指针pyr赋值。
    printf("修改前的值是：%c\n",*ptr);//*ptr或者ch都可以。
    *ptr='a';
    printf("修改后的值是：%c\n",*ptr);
    return 0;
}