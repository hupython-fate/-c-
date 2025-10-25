#include <stdio.h>
int main() {
	while(2>1){
	int ascll;
	float k=0.0;
	printf("请输入任意一个整数（如23、65、98等):");
	scanf(" %d",&ascll);
	printf("在ASCII的对应规则中，该数字对应的字符为:%c\n",ascll); 
	printf("如果想退出循环请输入666,不想则输入其它数字:");
	scanf("%f",&k);
	if(k==666){
		break;
	} 
}
	return 0;
} 
