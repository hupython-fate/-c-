#include <stdio.h>
int main() {
	float dan;
	float ge;
	float zhong;
	printf("请输入货物得单价：");
	scanf("%f",&dan);
	printf("请输入货物的个数：");
	scanf("%f",&ge);
	zhong=dan*ge;
	printf("货物的总价为%.2f。",zhong);
	return 0; 
} 
