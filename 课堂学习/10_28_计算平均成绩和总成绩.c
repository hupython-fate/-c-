#include <stdio.h>
int main()
{
	float a=0.0;
	float b=0.0;
	float c=0.0;
	float d=0.0;
	float e=0.0;
	float ee=0.0;
	printf("������ѧ���ĵ�һ�ųɼ���");
	scanf("%f",&a);
	printf("\n������ѧ���ĵڶ��ųɼ�:");
	scanf("%f",&b); 
	printf("\n������ѧ���ĵ����ųɼ�:"); 
    scanf("%f",&c);
    printf("\n������ѧ���ĵ����ųɼ�;");
    scanf("%f",&d);
    e=a+b+c+d;
    ee=(a+b+c+d)/4;
    printf("���ѧ����ƽ���ɼ����ܳɼ��ֱ�����%.2f�ֺ�%.2f�֡�\n",ee,e);
    return 0;
} 
