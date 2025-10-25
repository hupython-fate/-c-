#include <stdio.h>
int main() {
	int x=0;
	int y=0;
	while(1){
	printf("请输入任意一个十进制数：");
	printf("__________\b\b\b\b\b\b\b\b\b");
	scanf("%d",&x);
	printf("\n对应的八进制数为%o,对应的十六进制数为%x.",x);
	printf("如果想结束循环请输入3：");
	scanf("%d",&y);
	if(y==3){
		break;
	}
	}
	return 0;
} 
