#include <stdio.h>
int AAD(int x,int y){
	int z=x+y;
	return z;
} 


int main() {
	int a,b;
	a=0;
	b=0;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	int sum=AAD(a,b);
	printf("%d",sum); 
	return 0;
}
