#include <stdio.h>
#include <math.h>
float jin=0.0;
float yao=0.0;
int age=0;
float shen=0.0;
float ti=0.0;
float tun=0.0;
int xingbie=0;
char huo_don='l';
float huo=0.0;

float BMI(float ti_zhong,float shen_gao){//计算bmi的函数 
	return ti_zhong/(shen_gao*shen_gao);
}

float WHR(float yao,float tun){//计算腰臀围的函数   
	float whr=yao/tun;//单位是cm 
	return whr;
}

int yao23(float yao56_1,int xingbie){//判断腰围是否合理的函数 
	if(xingbie==1 && yao56_1<90){
		//printf("您符合腰围标准！");
	    return 20;
	}
	else if(xingbie==0 && yao56_1<85){
		//printf("您符合腰围标准！")
	    return 10;
	}
	else{
		return 2;
	}
}

float BFP(float yao_2,float jin,float tun_1,int xingbie,float shen_gao1){//计算体脂率的函数 
	if(xingbie==1){
	    float bfp=(495/(1.0324-0.19077*log10(yao_2-jin)+0.15456*log10(shen_gao1)))-450;
	    return bfp;
	}
	else if(xingbie==0){
	    float bfp=(495/(1.29579-0.35004*log10(yao_2+tun_1-jin)+0.22100*log10(shen_gao1)))-450;
	    return bfp;
	}
	else {
		return -1;
	}
	
}

float FFMI(float ti_zhong,float shen_gao2,float bfp){//第三个参数是体脂率 
    float ffmi=(ti_zhong*(1-bfp))/shen_gao2*shen_gao2;
    return ffmi;
}

float BMR(float shen_gao,int age,float ti_zhong,int xingbie){//基础代谢率
     if(xingbie==1){
     	return (10*ti_zhong)+(6.25*shen_gao*100)-(5*age)+5;
	 }
	 else if(xingbie==0){
	 	return (10*ti_zhong)+(6.25*shen_gao*100)-(5*age)-161;
	 }
}

float TDEE(float bmr,float huo_don){//用户输入的活动系数是字符，等会要造一个函数把字符转化成对应的浮点数。 
    float tdee=bmr*huo_don; 
	return tdee;
}

void ti_shi(){
	printf("========健康测试开始，请保证输入的数据真实，这会影响最终结果========\n");
	printf("========此次测试所需的测量工具有：软尺、体重称等。==========\n");
	printf("\a");
	printf("\a");
	while(1){
	printf("\n请输入你的身高（单位为米）：");
	scanf("%f",&shen);
	if(shen>3.0 || shen<0.5){
		printf("您输入的身高不在正常人的范围之内，请重新输入！"); 
		continue; 
	}
	else{
		break;
	}
}
    while(1){
    printf("\n请输入你的体重（单位为kg,公斤）：");
    scanf("%f",&ti);
    if(ti>200 || ti<15){
    	printf("您输入的身高不在正常人的范围之内，请重新输入！");
    	continue;
	}
	else{
		break;
	}
	}
	while(1){
	printf("\n请输入你的年龄：");
	scanf("%d",&age);
	if(age>150 || age<1){
		printf("您输入的年龄不在正常人的范围内，请重新输入！");
		continue; 
	}
	else{
		break;
	}
	}
	while(1){
	printf("\n请输入你的姓别（男性请输1，女性请输0）：");
	scanf("%d",&xingbie);
	if(xingbie!=0 && xingbie!=1){
		printf("您输入的数字不是1或0，请重新输入！");
		continue; 
	}
	else{
		break;
	}
}
    while(1){
	printf("\n请输入你的颈围（在喉结下方（男性）或最细处（女性）测量）(单位为厘米，cm)：");
	scanf("%f",&jin);
	if(jin>100 || jin<10){
		printf("您输入的颈的长度不合理，请检查单位是否为厘米，重新输入！");
		continue; 
	}
	else{
		break; 
	} 
}
    while(1){
	printf("\n请输入你的腰围（肚脐眼的一圈）(单位为厘米，cm)：");
	scanf("%f",&yao);
	if(yao>100 && yao<10){
		printf("您输入的腰围数字不合理，请重新输入！");
		continue;
	}
	else{
		break;
	}
	}
	
	
	while(1){
	printf("\n请输入你的臀围（屁股的一圈）(单位为厘米，cm)：");
	scanf("%f",&tun);
	if(tun>100 && tun<10){
		printf("您输入的臀围不合理，请重新输入！");
		continue; 
	}
	else{
		break;
	}
}
}

void ti_shi2(){
	while(1){
	printf("\n请选择你的活动系数：\n");
	printf("a,久坐（办公室工作）： 1.2\nb,轻度活动（每周1-3天运动）： 1.375\nc,中度活动（每周3-5天运动）： 1.55\nd,非常活跃（每周6-7天剧烈运动）： 1.725\ne,专业运动员： 1.9\n\t"); 
    printf("____\b\b\b\b");
	scanf(" %c",&huo_don);
    if(huo_don=='a' || huo_don=='A'){
    	huo=1.2;
    	break;
	}
	else if(huo_don=='b' || huo_don=='B'){
		huo=1.375;
		break;
	}
	else if(huo_don=='c' || huo_don=='C'){
		huo=1.55;
		break;
	}
	else if(huo_don=='D' || huo_don=='d'){
		huo=1.725;
		break;
	}
	else if(huo_don=='e' || huo_don=='E'){
		huo=1.9;
		break;
	}
	else{
		printf("你输入的不是这几个选项之一，请重新输入！");
		continue;
	}
}
} 

void pa_bfp(float bfp,int xin){
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

void pa_bmi(float bmi){
	if(bmi<18.5){
		printf("\t您属于偏瘦范围。\n"); 
	}
	else if(bmi>18.5 && bmi<23.9){
		printf("\t您属于正常范围。\n");
	}
	else if(bmi>24 && bmi<27.9){
		printf("\t您属于偏胖的范围。\n");
	}
	else if(bmi>=28){
		printf("\t您属于肥胖范围。\n"); 
	}
}

void pa_whr(float whr,int xin){
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

void pa_yao23(int yao23){
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

int main(){
	
	ti_shi();
	ti_shi2();
    float bmi=BMI(ti,shen);//bmi的 
    float whr=WHR(yao,tun);
    int yao21=yao23(yao,xingbie);
    float bfp=BFP(yao,jin,tun,xingbie,shen*100);
    float ffmi=FFMI(ti,shen,bfp/100);
    float bmr=BMR(shen,age,ti,xingbie);
    float tde=TDEE(bmr,huo);
    int yao2=yao23(yao,xingbie);
    printf("\n\tok!您的健康测试报告为：\n");
    printf("\t您的体脂率为：%.2f%%\n",bfp);
	pa_bfp(bfp,xingbie);
    printf("\t您的身体BMI指数为：%.2f\n",bmi);
    pa_bmi(bmi);
    printf("\t您的腰臀比为：%.2f\n",whr);
    pa_whr(whr,xingbie);
    pa_yao23(yao2);
    printf("\t您的去脂体重指数为：%.2f\n",ffmi);
    printf("\t您的基础代谢率是：%.2f%%\n",bmr);
    printf("\t您的每日总能量消耗为：%.2f\n",tde);
    printf("\t注意！！！！这些计算结果完全依赖于您输入的数据，如果你输入的数据有误，哪么算出的结果也将有错误！");
    
}
