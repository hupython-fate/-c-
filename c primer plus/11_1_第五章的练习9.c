#include <stdio.h>
void ti_wen(double hua)
{
	const float one=5.0;
	const float two=9.0;
	const float three=273.16;
	const int si=32;
	double se=one/two*(hua-si);//�����¶� 
	double kai=se+three;//�����¶� 
	printf("�����¶����£�\n");
	printf("�����¶ȣ�%.2f\n",hua);
	printf("�����¶ȣ�%.2f\n",se);
	printf("�����¶ȣ�%.2f\n",kai);
}


 
int main(void)
{
	while(1)
	{
	double hua;
	printf("������һ�������¶ȣ�");
	int aa=scanf("%lf",&hua);//scanf���������ȡ�����򷵻�1�� 
	if(aa==1)
	ti_wen(hua);
	else
	break; 
    }
	return 0;
 } 
