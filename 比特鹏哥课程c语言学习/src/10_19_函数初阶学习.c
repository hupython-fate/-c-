#include <stdio.h>
void jiao(int* x,int* y){
    int z=*x;//把指针x指向的值赋给整形变量z。 
	*x=*y;// 把y对应的值赋给x. 
	*y=z;//把整形变量z(此时是x的值)赋给*y。 
}
int main() {
	//写一个交换变量的函数。 
	int a=10;
	int b=20;
	printf("交换前的值 %d %d \n",a,b);
	jiao(&a,&b);//c的值是10.为什么？
	//怎么才能实现一个交换两个变量的值的函数？ 

	//使用指针是最优解。 
	printf("交换后的值 %d %d \n",a,b);
	return 0;
} 
