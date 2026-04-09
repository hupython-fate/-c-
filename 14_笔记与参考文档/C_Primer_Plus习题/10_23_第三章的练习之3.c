#include <stdio.h>
int main() {
	float shu=0.0;
	printf("请数入一个浮点数，即带小数点的数，比如3.2，3.0，63.654等：");
	scanf("%f",&shu);
	printf("它的小数形式是:%f\n",shu);
	printf("它的指数形式是:%e\n",shu);
	printf("它的p记数法的形式为:%a\n",shu);
	return 0;
} 
