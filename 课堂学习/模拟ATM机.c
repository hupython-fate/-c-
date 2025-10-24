#include <stdio.h>
int main() {
	int mi=0; 
	float jin=0.0; 
	printf("请输入你的密码？\n");
	scanf("%d",&mi);
	printf("请输入金额：\n");
	scanf("%f",&jin);
	printf("您的取款金额为%.2f。\n",jin);
	printf("交易完成，请取走卡片！\n");
	return 0;
} 
