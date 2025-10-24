#include <stdio.h>
int main(){
	float age;
	float s;
	printf("请输入你的年龄(可以带小数点)，我将告诉你你活了多少秒：");
	scanf("%f",&age);
	s=age*3.156e7;
	printf("\n您的秒龄是%.1f秒",s);
	return 0;
} 
