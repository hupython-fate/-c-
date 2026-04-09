#include <stdio.h>
int main(void)
{    
    const int a=26;
    char zi[26];
    int b;    
    for(b=0;b<a;b++)
    {
        printf("输入：");
       scanf("%c",&zi[b]);
     getchar();
 }
    printf("%s",zi);
    return 0;
}
//成功了！
