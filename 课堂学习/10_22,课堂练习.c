#include <stdio.h>
int main(){
	int a,b;
	a=10&3;
	b=10|3;
	printf("%d,%d\n",a,b);//Ϊʲô�������2��11��
	char k='k';
	char l;
	putchar(k),printf("\n"); //�ַ����������
	l=getchar();
	putchar(l),printf("\n");//�ַ����뺯����
	int x=10,y=100;
	y*=x+x;
	printf("%d\n",y);
	//�����ͳ�����ָ����ʽ��
	float zhi=2.e2;
	printf("%.2f\n",zhi);//���Ϊ200.00
	//Ϊʲô��200.00�� 2.e2�൱��2.0*10��2�η�����2.0*100=200.00��
	 
	return 0;
} 
