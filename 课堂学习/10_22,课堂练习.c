#include <stdio.h>
int main(){
	int a,b;
	a=10&3;
	b=10|3;
	printf("%d,%d\n",a,b);//为什么输出的是2，11？
	char k='k';
	char l;
	putchar(k),printf("\n"); //字符输出函数。
	l=getchar();
	putchar(l),printf("\n");//字符输入函数。
	int x=10,y=100;
	y*=x+x;
	printf("%d\n",y);
	//浮点型常量的指数形式！
	float zhi=2.e2;
	printf("%.2f\n",zhi);//输出为200.00
	//为什么是200.00？ 2.e2相当于2.0*10的2次方。即2.0*100=200.00。
	 
	return 0;
} 
