#include <stdio.h>
int main() {
	char name[32];
	float shen=0.0;
	float shen2=0.0; 
	printf("��������������ʲô��");
	printf("________\b\b\b\b\b\b\b");
	scanf("%s",name);
	printf("�����������Ƕ��٣���������Ϊ��λ��");
	printf("________\b\b\b\b\b\b\b");
	scanf("%f",&shen);
	shen2=shen/100.0;
	printf("%s,��������%.1f.",name,shen2);
	return 0;
} 
