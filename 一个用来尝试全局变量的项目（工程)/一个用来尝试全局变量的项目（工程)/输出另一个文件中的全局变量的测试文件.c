#include <stdio.h>

extern int a;//声明来自外界的符号。
int main(){
	printf("%d\n",a);
    return 0;
}