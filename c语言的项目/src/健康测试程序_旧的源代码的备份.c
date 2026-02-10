#include <stdio.h>
#include <math.h>
#define A 1.2
#define B 1.375
#define C 1.55
#define D 1.725
#define E 1.9
#define ka_jiao_hu_huan 4.184 

float jin=0.0;//用来储存颈围的变量 
float yao=0.0;//用来储存腰围的变量 
float age=0;//用来储存年龄的变量 
float shen=0.0;//用来储存身高的变量 
float ti=0.0;//用来储存体重的变量 
float tun=0.0;//用来储存臀围的变量 
int xingbie=0;//用来储存性别的变量 
char huo_don='l';//用来储存用户输入的选项的变量 
float huo=0.0;//用来储存ti_shi函数里的最后一个while把选项转化为每个选项对应的值。 
int kkk=0;//用来储存重新开始的值！ 

float BMI(float ti_zhong,float shen_gao)
{//计算bmi的函数 
	return ti_zhong/(shen_gao*shen_gao);
}

float WHR(float yao,float tun)
{//计算腰臀比的函数   
	float whr=yao/tun;//单位是cm 
	return whr;
}

float BFP(float yao_2,float jin,float tun_1,int xingbie,float shen_gao1)
{//计算体脂率的函数 
	if(xingbie==1)
	{
	    float bfp=(495/(1.0324-0.19077*log10(yao_2-jin)+0.15456*log10(shen_gao1)))-450;
	    return bfp;
	}
	else if(xingbie==0)
	{
	    float bfp=(495/(1.29579-0.35004*log10(yao_2+tun_1-jin)+0.22100*log10(shen_gao1)))-450;
	    return bfp;
	}
	else 
	{
		return -1;
	}
	
}

float FFMI(float ti_zhong,float shen_gao2,float bfp)
{//第三个参数是体脂率，计算去指体重指数的函数
    float ffmi=(ti_zhong*(1-bfp))/pow(shen_gao2,2);
    return ffmi;
}

float BMR(float shen_gao,int age,float ti_zhong,int xingbie)
{//基础代谢率    
     if(xingbie==1)
	 {
     	return 10*ti_zhong+6.25*shen_gao*100-5*age+5;
	 }
	 else if(xingbie==0)
	 {
	 	return 10*ti_zhong+6.25*shen_gao*100-5*age-161;
	 }
}

void ti_shi()
{//第一步，也是最关健的一步，提示用户输汝数据，要保证代码有良好的规范。 
	printf("========健康测试开始，请保证输入的数据真实，这会影响最终结果========\n");
	printf("========此次测试所需的测量工具有：软尺、体重称等。==========\n");
	printf("\a");
	
	while(1)
	{
	printf("\n请输入你的身高（单位为米)：");
	scanf("%f",&shen);
	    if(shen>2.0 || shen<1)
	    {
            printf("\n您输入的身高不在正常人的范围之内，请重新输入！"); 
	        continue; 
	    }
	    else
	    break;
    }
    
    while(1)
	{
    printf("\n请输入你的体重（单位为kg,公斤）：");
    scanf("%f",&ti);
        if(ti>200 || ti<20)
	    {
    	    printf("\n您输入的身高不在正常人的范围之内，请重新输入！");
    	    continue;
    	}
	    else
	    break;
	}
	
	while(1)
	{
	printf("\n请输入你的年龄：");
	scanf("%f",&age);
	    if(age>100 || age<3)
    	{
	    	printf("\n您输入的年龄不在正常人的范围内，请重新输入！");
		    continue; 
    	}
	    else
	    break;
	}
	
	while(1)
	{
	printf("\n请输入你的姓别（男性请输1，女性请输0）：");
	scanf("%d",&xingbie);
	    if(xingbie!=0 && xingbie!=1)
	    {
	    	printf("\n您输入的数字不是1或0，请重新输入！");
	    	continue; 
	    }
	    else
	    break;
    }
    
    while(1)
	{
	printf("\n请输入你的颈围（在喉结下方（男性）或最细处（女性）测量）(单位为厘米，cm)：");
	scanf("%f",&jin);
	     if(jin>50 || jin<20)
	    {
		    printf("\n您输入的颈的长度不合理，请检查单位是否为厘米，重新输入！");
		    continue; 
	    }
	    else
	    break; 
    }
    
    while(1)
	{
	printf("\n请输入你的腰围（肚脐眼的一圈）(单位为厘米，cm)：");
	scanf("%f",&yao);
	    if(yao>90 || yao<50)
	    {
		    printf("\n您输入的腰围数字不合理，请重新输入！");
		    continue; 
    	}
	    else
	    break;
	}
	
	while(1)
	{
	printf("\n请输入你的臀围（屁股的一圈）(单位为厘米，cm)：");
	scanf("%f",&tun);
	     if(tun>110 || tun<50)
	    {
	    	printf("\n您输入的臀围不合理，请重新输入！");
	    	continue; 
    	}
	    else
	    break;
    }
    
    while(1)
	{
	printf("\n请选择你的活动系数：\n");
	printf("a,久坐（办公室工作）\n");
	printf("b,轻度活动（每周1-3天运动）\n");
	printf("c,中度活动（每周3-5天运动）\n");
	printf("d,非常活跃（每周6-7天剧烈运动）\n");
	printf("e,专业运动员\n"); 
    printf("______\b\b\b\b");
	scanf(" %c",&huo_don);//输入的是一个字符，所以要用字符形变量 
        if(huo_don=='a' || huo_don=='A')
	    {
    	    huo=A;//使用标识符常量 
    	    break;
	    }
	    else if(huo_don=='b' || huo_don=='B')
	    {
		    huo=B;
		    break;
	    }
	    else if(huo_don=='c' || huo_don=='C')
	    {
		    huo=C;
		    break;
	    }
	    else if(huo_don=='D' || huo_don=='d')
	    {
		    huo=D;
		    break;
	    }
	    else if(huo_don=='e' || huo_don=='E')
	    {
		    huo=E;
		    break;
	    }
	    else
	    {
		    printf("你输入的不是这几个选项之一，请重新输入！");
		    continue;
	    }
    }
}

int yao23(float yao56_1,int xingbie)
{//判断腰围是否合理的函数 
	if(xingbie==1 && yao56_1<90)
	{
		//printf("您符合腰围标准！");
	    return 20;
	}
	else if(xingbie==0 && yao56_1<85)
	{
		//printf("您符合腰围标准！")
	    return 10;
	}
	else
	{
		return 2;
	}
}

float TDEE(float bmr,float huo_don)
{//用户输入的活动系数是字符，等会要造一个函数把字符转化成对应的浮点数。——已完成，就是ti_shi函数。 //计算出的是每日总能量消耗。 
    float tdee=bmr*huo_don; 
	return tdee;
}



/* 这些函数是根据单个数据来进行判断的，但是我需要的是一个综合的判断函数。所以这些不行。 
void pa_bfp(float bfp,int xin)
{
	if(bfp<5 && bfp>2 && xin==1){
		printf("\t您不能再这样下去了！您的体脂率太低了！\n\t请不要这样对自己！我为您感到伤心！");
	}
	else if(bfp<13 && bfp>6 && xin==1){
		printf("\t\n此范围内的个体通常拥有极高的肌肉量和极低的脂肪量。\t\n对于普通人来说，并非必要追求此范围，维持在此水平可能需要极其严格的饮食和训练，且可能对部分人的健康产生负面影响（如女性运动员三联症）。");
	}
	else if(bfp<17 && bfp>7 && xin==1){
		printf("\t\n这是大多数人应该追求的理想健康目标。在这个范围内，你患肥胖相关疾病（如心脏病、2型糖尿病、某些癌症）的风险较低。 \t\n外形上通常显得精干、有肌肉线条。");
	}
	else if(bfp<24 && bfp>18 && xin==1){
		printf("\t\n这个范围属于“不理想但尚可接受”。你可能没有明显的健康问题，但健康风险已经开始增加。\t\n处于此范围的人，建议通过改善饮食和增加运动来向“健康范围”努力，以预防未来疾病。");
	}
	else if(bfp>=25 && xin==1){
		printf("\t\n肥胖范围：处于此范围意味着健康风险显著增加，与多种代谢性疾病和心血管疾病高度相关。\t\n强烈建议采取行动（咨询医生或营养师）来降低体脂率，即使体重正常（即“正常体重肥胖”）。");
	}
	else if(bfp<13 && bfp>10 && xin==0){
		printf("\t\n您不能再这样下去了！您的体脂率太低了！\t\n请不要这样对自己！我为您感到伤心！");
	}
	else if(bfp<20 && bfp>14 && xin==0){
		printf("\t\n此范围内的个体通常拥有极高的肌肉量和极低的脂肪量。\t\n对于普通人来说，并非必要追求此范围，维持在此水平可能需要极其严格的饮食和训练，且可能对部分人的健康产生负面影响（如女性运动员三联症）。"); 
	}
	else if(bfp<24 && bfp>21 && xin==0){
		printf("\t\n这是大多数人应该追求的理想健康目标。在这个范围内，你患肥胖相关疾病（如心脏病、2型糖尿病、某些癌症）的风险较低。\t\n 外形上通常显得精干、有肌肉线条。");
	}
	else if(bfp<31 && bfp>25 && xin==0){
		printf("\t\n这个范围属于“不理想但尚可接受”。你可能没有明显的健康问题，但健康风险已经开始增加。\t\n处于此范围的人，建议通过改善饮食和增加运动来向“健康范围”努力，以预防未来疾病。");
	}
	else if(bfp>=32 && xin==0){
		printf("\t\n肥胖范围：处于此范围意味着健康风险显著增加，与多种代谢性疾病和心血管疾病高度相关。\t\n强烈建议采取行动（咨询医生或营养师）来降低体脂率，即使体重正常（即“正常体重肥胖”）。");
	}
}

void pa_bmi(float bmi)
{
	if(bmi<18.5)
	{
		printf("\t您属于偏瘦范围。\n"); 
	}
	else if(bmi>18.5 && bmi<23.9)
	{
		printf("\t您属于正常范围。\n");
	}
	else if(bmi>24 && bmi<27.9)
	{
		printf("\t您属于偏胖的范围。\n");
	}
	else if(bmi>=28)
	{
		printf("\t您属于肥胖范围。\n"); 
	}
}

void pa_whr(float whr,int xin)
{
	if(whr<0.9 && xin==1){
		printf("\t您的腰围没有超标，是好的身材，请多加锻练，继续保持！");
	}
	else if(whr<0.85 && xin==0){
		printf("\t您的腰围没有超标，是好的身材，请多加锻练，继续保持！");
	}
	else{
		printf("\t您的腰围可能超标，是苹果形身材，请多加锻练，因为这个范围内的心血管疾病的概律显著增加！"); 
	}
	
}

void pa_yao23(int yao23)
{
	if(yao23==20){
		printf("\t尊贵的男士,您的腰围符和合标准，请继续保持！\n");
	}
	else if(yao23==10){
		printf("\t美丽的女士，您的腰围符合标尊，起继续保持！\n"); 
	}
	else{
		printf("\t您的腰围太大了，如果输入的数据确定没有问题的话，那么您可能有中心性肥胖的风险！\n");
	} 
}
*/




void zong_pan_duan(int xin,float bmi_1,float whr_1,float bfp_1,float ffmi_1)
{//根据性别、BMI、腰臀比、体脂率、去脂体重指数五个指标来综合判断。 
	if(xin==1)
	{
		if(bmi_1>=30.0 && bfp_1>=25.0 && whr_1>=0.95)
		{
			printf("尊贵的先生，您正处于一个极危险的状态，建议您马上资询医生！\n");
		}
		else if(bmi_1>=25.0 && bmi_1<30.0 && bfp_1>8.0 && bfp_1<20.0 && whr_1>0.75 && whr_1<0.90 && ffmi_1>22.0)
		{
			printf("尊贵的先生，您可能认为自己有点超重，但是我要告诉您的是，你是健康的，您是多少人羡慕不来的健康的超重啊！我建议您多多锻练，继续保持！\n");
		}
		else if(bmi_1>=18.0 && bmi_1<24.9 && bfp_1>20.0 && whr_1>0.90 && whr_1<1.0 && ffmi_1<18.0)
		{
			printf("尊贵的先生，您可能认为自己很健康，虽然实际也确实如此，但您是\"隐藏性肥胖\"的状态，即，体重正常，但是肌肉量不足。我建议您多加锻练，提高肌肉量。"); 
		}
		else if(bmi_1>=18.5 && bmi_1<24.9 && bfp_1>10.0 && bfp_1<20.0 && whr_1>0.75 && whr_1<0.90 && ffmi_1>18.0 && ffmi_1<22.0)
		{
		    printf("尊贵的先生，您是非常健康的，属于理想的健康范围，请继续保持！");
		}
		else
		{
			printf("您确定您的数据不是乱输而是经过严谨测量的吗？要么是您在乱输，要么是程序出现未知错误。如果您确定是后一种情况，请联系开发者！");
		} 
	}
	if(xin==0)
	{
		if(bmi_1>=30.0 && bfp_1>32.0 && whr_1>=0.9)
		{
			printf("美丽的女士，您正处于一个极其危险的状态，建议您马上资询医生！");
		} 
        else if(bmi_1>=25.0 && bmi_1<30.0 && bfp_1>16.0 && bfp_1<28.0 && whr_1>0.70 && whr_1<0.85 && ffmi_1>17.0)
		{
			printf("美丽的女士，您可能认为自己有点超重，但是我要告诉您的是，你是健康的，您是多少人羡慕不来的健康的超重啊！我建议您多多锻练，继续保持！\n"); 
		}
		else if(bmi_1>=18.0 && bmi_1<24.9 && bfp_1>28.0 && whr_1>0.85 && whr_1<0.95 && ffmi_1<14.0)
		{
			printf("美丽的女士，您可能认为自己很健康，虽然实际也确实如此，但您是\"隐藏性肥胖\"的状态，即，体重正常，但是肌肉量不足。我建议您多加锻练，提高肌肉量。");
		}
		else if(bmi_1>=18.5 && bmi_1<24.9 && bfp_1>18.0 && bfp_1<28.0 && whr_1>0.70 && whr_1<0.85 && ffmi_1>14.0 && ffmi_1<17.0)
		{
			printf("美丽的女士，您是非常健康的，属于理想的健康范围，请继续保持！");
		}
	    else
		{
			printf("您确定您的数据不是乱输而是经过严谨测量的吗？要么是您在乱输，要么是程序出现未知错误。如果您确定是后一种情况，请联系开发者！");
		}
    }
}

int main()
{
	while(1){
	ti_shi();//第一步的输入提示。
	 
    float bmi=BMI(ti,shen);//得出用户的BMI指数 
    float whr=WHR(yao,tun);//得出用户的腰臀比 
    float bfp=BFP(yao,jin,tun,xingbie,shen*100);//得出用户的体脂率 
    float ffmi=FFMI(ti,shen,bfp/100);//得出去脂体重指数 
    float bmr=BMR(shen,age,ti,xingbie);//得出基础代谢率
    
    
    float tde=TDEE(bmr,huo);//这个函数有必要存在吗？对于我的需求来说，嗯，得搞清楚这个算出的能量的单位！是千卡。 
    int yao21=yao23(yao,xingbie);//返回一个整数，判断腰围是否合理，不过这个函数在有了腰臀比后还有必要吗？嗯，可以互为补充，增加结果的可靠性。
    
    float qian_ka=tde*ka_jiao_hu_huan;//把得出的以千卡为单位的能量数换算成等价的千焦数 
    float qian_ka_tian=bmr*ka_jiao_hu_huan;
    printf("==========好的!您的健康测试报告如下==========\n");
     
    
    printf("您的体脂率为：%.2f%%\n",bfp);
	//pa_bfp(bfp,xingbie);
    printf("您的身体BMI指数为：%.2f\n",bmi);
    //pa_bmi(bmi);
    printf("您的腰臀比为：%.2f\n",whr);
    //pa_whr(whr,xingbie);
    //pa_yao23(yao2);
    printf("您的去脂体重指数为：%.2f\n",ffmi);
    printf("您的预期基础代谢率是：%.2f千卡/天或%.3f千焦/天\n",bmr,qian_ka_tian);
    printf("您的预期每日总能量消耗为：%.2f千卡或%.3f千焦\n",tde,qian_ka);
    printf("================根据上述数据，给您的评价和建议如下=======================\n");
    zong_pan_duan(xingbie,bmi,whr,bfp,ffmi);
    printf("pass\n");
    printf("==========注意！这些计算结果完全依赖于您输入的数据，如果你输入的数据有误，哪么算出的结果也将有错误！==========\n");
    printf("========================================本次测试的结果仅供参考!===============================================\n");
	printf("========================================如有任何意外，本人概不负责============================================\n");
	printf("\n最后的结果出来了，您是否满意？如果不满意，可以输入666,重新开始测试：");
	printf("______\b\b\b\b\b");
	scanf("%d",&kkk);
	    if(kkk==666)
	    {
		    continue;
	    }
	    else
	    {
	    	break; 
		}
    }
}
