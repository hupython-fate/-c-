#include <stdio.h>
int main(){
	float shu;
	float da;
	float time;
	printf("�������ļ������ٶȣ�(��Mb/sΪ��λ)��");
	printf("__________\b\b\b\b\b\b\b\b");
	scanf("%f",&shu);
	printf("\n�������ļ��Ĵ�С������MbΪ��λ��:");
	printf("__________\b\b\b\b\b\b\b\b");
	scanf("%f",&da);//һ�ֽڵ��ڰ�λ��Ҳ����˵����һ��λ���ٶ�����һ��λ���ļ�Ҫ���롣 
	time=da/(shu*0.125);
	printf("���������ʱ��Ϊ%f�룡\n",time);
	return 0;
} 
