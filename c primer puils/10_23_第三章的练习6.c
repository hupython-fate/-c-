#include <stdio.h>
int main() {
	//一英寸相当于2.54cm
	float yin=0.0;
	float li=0.0;
	printf("请输入英寸数：");
	scanf("%f",&yin);
	li=yin*2.54;
	printf("\n对应的厘米数为：%.2f",li); 
	return 0;
} 
