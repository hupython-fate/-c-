#include <stdio.h>
int main() {
	float kua_kuo=0.0;
	float zhi_lian=0.0;//一夸脱水约等于950克。 
	float feng_zi_shu=0.0; //一个水分子大约为3.0e-23克. 
	printf("请输入水的夸脱数（不知道这个概念的请自行百度):");
	scanf("%f",&kua_kuo);
	zhi_lian=kua_kuo*950;
	feng_zi_shu=(zhi_lian/3.0e-23);
	printf("\n水分子的数量为%e个。",feng_zi_shu);
	printf("\n(注：1.3e+056的意思就是1.3*10的56次方。)");
	return 0;
} 
