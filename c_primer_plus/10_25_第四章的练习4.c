#include <stdio.h>
int main() {
	char name[32];
	float shen=0.0;
	float shen2=0.0; 
	printf("请问您的姓名是什么？");
	printf("________\b\b\b\b\b\b\b");
	scanf("%s",name);
	printf("请问你的身高是多少？（以厘米为单位）");
	printf("________\b\b\b\b\b\b\b");
	scanf("%f",&shen);
	shen2=shen/100.0;
	printf("%s,你的身高是%.1f.",name,shen2);
	return 0;
} 
