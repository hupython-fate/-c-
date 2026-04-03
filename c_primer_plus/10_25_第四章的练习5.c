#include <stdio.h>
int main(){
	float shu;
	float da;
	float time;
	printf("请输入文件下载速度？(以Mb/s为单位)：");
	printf("__________\b\b\b\b\b\b\b\b");
	scanf("%f",&shu);
	printf("\n请输入文件的大小？（以Mb为单位）:");
	printf("__________\b\b\b\b\b\b\b\b");
	scanf("%f",&da);//一字节等于八位，也就是说，以一单位的速度下载一单位的文件要八秒。 
	time=da/(shu*0.125);
	printf("所需的下载时间为%f秒！\n",time);
	return 0;
} 
