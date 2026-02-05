#include <stdio.h>
#define AABB 3.785
#define BBFF 1.609 
int main(){
	float li=0.0;
	float qi=0.0;
	float gon=0.0;
	float shen=0.0; 
	printf("请输入旅行的里程（英里）：");
	printf("____\b\b\b\b");
	scanf("%f",&li);
	printf("\n请输入旅行消耗的汽油量(加仑)：");
	printf("____\b\b\b\b");
	scanf("%f",&qi);
	gon=li*BBFF;
	shen=qi*AABB;
	printf("您旅行了%.1f公里！\n",gon);
	printf("您消耗了%.1f升油！\n",shen);
	return 0;
} 
