#include <stdio.h>


#define ADD(X,Y) ((X)+(Y))//�����ڶ���һ���꣬ʲô�Ǻꣿ��������Ϊһ��һ�а�ĺ�����

//#define�Ƕ����Ĺؼ��֡�����Ӻ�����֣�Ȼ���Ǻ�Ĳ���������Ǻ��塣 

int main(){
	int a=10;
	int b=20;
	int c=0;
	c=ADD(a,b);
	printf("%d",c);
	return 0;
} 
