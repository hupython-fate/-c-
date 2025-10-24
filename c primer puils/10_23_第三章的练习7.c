#include <stdio.h>
int main() {
	//美国测量体积的换算
	float bei=0.0;
	float ping_tuo=0.0;
	float ying_shi=0.0;
	float tan_sao=0.0;
	float ca_shao=0.0;
	int k=0;
	while(1){
	printf("请输入杯数(杯，一种体积单位，美国所使用)：");
	scanf("%f",&bei);
	ping_tuo=bei/2;
	ying_shi=bei*8;
	tan_sao=ying_shi*2;
	ca_shao=tan_sao*3;
	printf("\n品脱：%.1f,杯：%.1f,盎司：%.1f,大汤勺：%.1f,茶勺：%.1f。",ping_tuo,bei,ying_shi,tan_sao,ca_shao);
	printf("\n如果想退出循环请输1,如果想继续则输入其它数字：");
	scanf("%d",&k);
	if(k==1){
		break;
	} 
}
	return 0;
} 
