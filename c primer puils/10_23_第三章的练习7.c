#include <stdio.h>
int main() {
	//������������Ļ���
	float bei=0.0;
	float ping_tuo=0.0;
	float ying_shi=0.0;
	float tan_sao=0.0;
	float ca_shao=0.0;
	int k=0;
	while(1){
	printf("�����뱭��(����һ�������λ��������ʹ��)��");
	scanf("%f",&bei);
	ping_tuo=bei/2;
	ying_shi=bei*8;
	tan_sao=ying_shi*2;
	ca_shao=tan_sao*3;
	printf("\nƷ�ѣ�%.1f,����%.1f,��˾��%.1f,�����ף�%.1f,���ף�%.1f��",ping_tuo,bei,ying_shi,tan_sao,ca_shao);
	printf("\n������˳�ѭ������1,���������������������֣�");
	scanf("%d",&k);
	if(k==1){
		break;
	} 
}
	return 0;
} 
