#include "main.h"

int main(void)
{
	float qian_ka,qian_ka_tian;
	while(1){
	ti_shi();	     
    	qian_ka=BMR()*huo_don*ka_jiao_hu_huan;
	qian_ka_tian=BMR()*ka_jiao_hu_huan;
	printf("\n");
    	printf("==========Here is your health test result.==========\n");
    	printf("you are bfp:%.2f%%\n",BFP());
	printf("you are bmi:%.2f\n",ti/shen*shen);
       	printf("you are whr:%.2f\n",yao/tun);
        printf("you are ffmi:%.2f\n",FFMI(BFP()/100));
    	printf("Your expected basal metabolic rate is %.2f kcal per day or %.3f kJ per day.\n",BMR(),qian_ka_tian);
    	printf("Your expected total daily energy use is %.2f kcal or %.3f kJ.\n",BMR()*huo,qian_ka);
	printf("\n\n");
    	printf("==========Note: Your result depends on your data. If your data is wrong, your result will be wrong.==========\n");
    	printf("========================================This result is for reference only.===================================\n");
	printf("========================================I am not responsible for any problems.================================\n");
	printf("\nIf you want to test again, please enter 666.");
	printf("______\b\b\b\b\b");
	scanf("%d",&kkk);
	if(kkk==666) continue;
	else break; 
    }
	return 0;
}
