#include <stdio.h>
int main() {
	float kua_kuo=0.0;
	float zhi_lian=0.0;//һ����ˮԼ����950�ˡ� 
	float feng_zi_shu=0.0; //һ��ˮ���Ӵ�ԼΪ3.0e-23��. 
	printf("������ˮ�Ŀ���������֪���������������аٶ�):");
	scanf("%f",&kua_kuo);
	zhi_lian=kua_kuo*950;
	feng_zi_shu=(zhi_lian/3.0e-23);
	printf("\nˮ���ӵ�����Ϊ%e����",feng_zi_shu);
	printf("\n(ע��1.3e+056����˼����1.3*10��56�η���)");
	return 0;
} 
