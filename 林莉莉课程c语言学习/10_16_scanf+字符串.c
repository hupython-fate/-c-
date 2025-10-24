#include <stdio.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    char str_1[20];
    char str_2[20];
    printf("请输入字符串:");
    scanf("%s",str_1);
    printf("请第二次输入字符串:");
    scanf("%s",str_2);
    printf("[%s]\n",str_1);
    printf("[%s]\n",str_2);
    return 0;
}
//假如输入的是中文，哪么输入的将是空格，或者是pp