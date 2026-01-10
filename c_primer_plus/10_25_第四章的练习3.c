#include <stdio.h>
int main() {
	float k=0.0;
	printf("请输入任意一个浮点数：");
	scanf("%f",&k);
	printf("the input is %.1f or %.1e .\n",k);
	printf("the input is +%.3f or %e .\n",k);
    return 0;
} 
