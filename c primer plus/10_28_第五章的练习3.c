#include <stdio.h>
#define yi 3.28084
#define er 2.54
int main()
{
	float k=1;
	float j;
	float h;
	float o;
	while(k>0)
	{
	printf("\n����������ߣ����ף�cm��:");
	scanf("%f",&k);
	j=k/100;
	h=k*er;
	o=j*yi;
	printf("\n�������ò�ͬ��λ����ʾ�ֱ��ǣ�%.1f�ף�%.1fӢ�磬%.1fӢ��",j,h,o);
    }
	return 0;
 } 
