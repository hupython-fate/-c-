#include <stdio.h>
#include <windows.h>
int main() {
    // 设置控制台输出编码为UTF-8A
    SetConsoleOutputCP(65001);
    char categore;
    float price;
    //在C语言中，字符常量应该用单引号（''）而不是双引号（""）。所以，
    //if(categore=="A") 应该改为 if(categore=='A')，
    //同理，else if (categore=="B") 应该改为 else if (categore=='B')。
    printf("请输入商品类型：");
    scanf("%c",&categore);
    printf("请输入价格：");
    scanf("%f",&price);
    if(categore=='A'){
        if(price<500){
            printf("电子产品价格较低，无优惠。\n");
        }
        else if (price>=500 && price<1000){
            printf("电子产品可享受5%的优惠。\n");
        }
        else if (price>1000){
            printf("电子产品可享受10%的优惠。\n");
        }
    }
    else if (categore=='B'){
        if (price<200){
            printf("服装价格较低，无优惠。\n");
        }
        else if(price>=200 && price<500){
            printf("服装可享受8%的优惠.\n");
        }
        else if(price>500){
            printf("服装可享受15%的优惠。\n");
        }
    }
    return 0;
}