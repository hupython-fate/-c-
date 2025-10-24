#include <stdio.h>
int main() {
    int number[10];
    for (int i=0;i<=9;i++){
        number[i]=1+i;
        printf("%d\n",number[i]);
    }
    return 0;
}