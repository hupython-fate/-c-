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

float BMI(float ti_zhong,float shen_gao){//����bmi�ĺ��� 
	return ti_zhong/(shen_gao*shen_gao);
}

float WHR(float yao,float tun){//��������Χ�ĺ���   
	float whr=yao/tun;//��λ��cm 
	return whr;
}

int yao23(float yao56_1,int xingbie){//�ж���Χ�Ƿ����ĺ��� 
	if(xingbie==1 && yao56_1<90){
		//printf("��������Χ��׼��");
	    return 20;
	}
	else if(xingbie==0 && yao56_1<85){
		//printf("��������Χ��׼��")
	    return 10;
	}
	else{
		return 2;
	}
}

float BFP(float yao_2,float jin,float tun_1,int xingbie,float shen_gao1){//������֬�ʵĺ��� 
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

float FFMI(float ti_zhong,float shen_gao2,float bfp){//��������������֬�� 
    float ffmi=(ti_zhong*(1-bfp))/shen_gao2*shen_gao2;
    return ffmi;
}

float BMR(float shen_gao,int age,float ti_zhong,int xingbie){//������л��
     if(xingbie==1){
     	return (10*ti_zhong)+(6.25*shen_gao*100)-(5*age)+5;
	 }
	 else if(xingbie==0){
	 	return (10*ti_zhong)+(6.25*shen_gao*100)-(5*age)-161;
	 }
}

float TDEE(float bmr,float huo_don){//�û�����Ļϵ�����ַ����Ȼ�Ҫ��һ���������ַ�ת���ɶ�Ӧ�ĸ������� 
    float tdee=bmr*huo_don; 
	return tdee;
}

void ti_shi(){
	printf("========�������Կ�ʼ���뱣֤�����������ʵ�����Ӱ�����ս��========\n");
	printf("========�˴β�������Ĳ��������У���ߡ����سƵȡ�==========\n");
	printf("\a");
	printf("\a");
	while(1){
	printf("\n�����������ߣ���λΪ�ף���");
	scanf("%f",&shen);
	if(shen>3.0 || shen<0.5){
		printf("���������߲��������˵ķ�Χ֮�ڣ����������룡"); 
		continue; 
	}
	else{
		break;
	}
}
    while(1){
    printf("\n������������أ���λΪkg,�����");
    scanf("%f",&ti);
    if(ti>200 || ti<15){
    	printf("���������߲��������˵ķ�Χ֮�ڣ����������룡");
    	continue;
	}
	else{
		break;
	}
	}
	while(1){
	printf("\n������������䣺");
	scanf("%d",&age);
	if(age>150 || age<1){
		printf("����������䲻�������˵ķ�Χ�ڣ����������룡");
		continue; 
	}
	else{
		break;
	}
	}
	while(1){
	printf("\n����������ձ���������1��Ů������0����");
	scanf("%d",&xingbie);
	if(xingbie!=0 && xingbie!=1){
		printf("����������ֲ���1��0�����������룡");
		continue; 
	}
	else{
		break;
	}
}
    while(1){
	printf("\n��������ľ�Χ���ں���·������ԣ�����ϸ����Ů�ԣ�������(��λΪ���ף�cm)��");
	scanf("%f",&jin);
	if(jin>100 || jin<10){
		printf("������ľ��ĳ��Ȳ��������鵥λ�Ƿ�Ϊ���ף��������룡");
		continue; 
	}
	else{
		break; 
	} 
}
    while(1){
	printf("\n�����������Χ�������۵�һȦ��(��λΪ���ף�cm)��");
	scanf("%f",&yao);
	if(yao>100 && yao<10){
		printf("���������Χ���ֲ��������������룡");
		continue;
	}
	else{
		break;
	}
	}
	
	
	while(1){
	printf("\n�����������Χ��ƨ�ɵ�һȦ��(��λΪ���ף�cm)��");
	scanf("%f",&tun);
	if(tun>100 && tun<10){
		printf("���������Χ���������������룡");
		continue; 
	}
	else{
		break;
	}
}
}

void ti_shi2(){
	while(1){
	printf("\n��ѡ����Ļϵ����\n");
	printf("a,�������칫�ҹ������� 1.2\nb,��Ȼ��ÿ��1-3���˶����� 1.375\nc,�жȻ��ÿ��3-5���˶����� 1.55\nd,�ǳ���Ծ��ÿ��6-7������˶����� 1.725\ne,רҵ�˶�Ա�� 1.9\n\t"); 
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
		printf("������Ĳ����⼸��ѡ��֮һ�����������룡");
		continue;
	}
}
} 

void pa_bfp(float bfp,int xin){
	if(bfp<5 && bfp>2 && xin==1){
		printf("\t��������������ȥ�ˣ�������֬��̫���ˣ�\n\t�벻Ҫ�������Լ�����Ϊ���е����ģ�");
	}
	else if(bfp<13 && bfp>6 && xin==1){
		printf("\t\n�˷�Χ�ڵĸ���ͨ��ӵ�м��ߵļ������ͼ��͵�֬������\t\n������ͨ����˵�����Ǳ�Ҫ׷��˷�Χ��ά���ڴ�ˮƽ������Ҫ�����ϸ����ʳ��ѵ�����ҿ��ܶԲ����˵Ľ�����������Ӱ�죨��Ů���˶�Ա����֢����");
	}
	else if(bfp<17 && bfp>7 && xin==1){
		printf("\t\n���Ǵ������Ӧ��׷������뽡��Ŀ�ꡣ�������Χ�ڣ��㻼������ؼ����������ಡ��2�����򲡡�ĳЩ��֢���ķ��սϵ͡� \t\n������ͨ���Եþ��ɡ��м���������");
	}
	else if(bfp<24 && bfp>18 && xin==1){
		printf("\t\n�����Χ���ڡ������뵫�пɽ��ܡ��������û�����ԵĽ������⣬�����������Ѿ���ʼ���ӡ�\t\n���ڴ˷�Χ���ˣ�����ͨ��������ʳ�������˶����򡰽�����Χ��Ŭ������Ԥ��δ��������");
	}
	else if(bfp>=25 && xin==1){
		printf("\t\n���ַ�Χ�����ڴ˷�Χ��ζ�Ž��������������ӣ�����ִ�л�Լ�������Ѫ�ܼ����߶���ء�\t\nǿ�ҽ����ȡ�ж�����ѯҽ����Ӫ��ʦ����������֬�ʣ���ʹ���������������������ط��֡�����");
	}
	else if(bfp<13 && bfp>10 && xin==0){
		printf("\t\n��������������ȥ�ˣ�������֬��̫���ˣ�\t\n�벻Ҫ�������Լ�����Ϊ���е����ģ�");
	}
	else if(bfp<20 && bfp>14 && xin==0){
		printf("\t\n�˷�Χ�ڵĸ���ͨ��ӵ�м��ߵļ������ͼ��͵�֬������\t\n������ͨ����˵�����Ǳ�Ҫ׷��˷�Χ��ά���ڴ�ˮƽ������Ҫ�����ϸ����ʳ��ѵ�����ҿ��ܶԲ����˵Ľ�����������Ӱ�죨��Ů���˶�Ա����֢����"); 
	}
	else if(bfp<24 && bfp>21 && xin==0){
		printf("\t\n���Ǵ������Ӧ��׷������뽡��Ŀ�ꡣ�������Χ�ڣ��㻼������ؼ����������ಡ��2�����򲡡�ĳЩ��֢���ķ��սϵ͡�\t\n ������ͨ���Եþ��ɡ��м���������");
	}
	else if(bfp<31 && bfp>25 && xin==0){
		printf("\t\n�����Χ���ڡ������뵫�пɽ��ܡ��������û�����ԵĽ������⣬�����������Ѿ���ʼ���ӡ�\t\n���ڴ˷�Χ���ˣ�����ͨ��������ʳ�������˶����򡰽�����Χ��Ŭ������Ԥ��δ��������");
	}
	else if(bfp>=32 && xin==0){
		printf("\t\n���ַ�Χ�����ڴ˷�Χ��ζ�Ž��������������ӣ�����ִ�л�Լ�������Ѫ�ܼ����߶���ء�\t\nǿ�ҽ����ȡ�ж�����ѯҽ����Ӫ��ʦ����������֬�ʣ���ʹ���������������������ط��֡�����");
	}
}

void pa_bmi(float bmi){
	if(bmi<18.5){
		printf("\t������ƫ�ݷ�Χ��\n"); 
	}
	else if(bmi>18.5 && bmi<23.9){
		printf("\t������������Χ��\n");
	}
	else if(bmi>24 && bmi<27.9){
		printf("\t������ƫ�ֵķ�Χ��\n");
	}
	else if(bmi>=28){
		printf("\t�����ڷ��ַ�Χ��\n"); 
	}
}

void pa_whr(float whr,int xin){
	if(whr<0.9 && xin==1){
		printf("\t������Χû�г��꣬�Ǻõ���ģ����Ӷ������������֣�");
	}
	else if(whr<0.85 && xin==0){
		printf("\t������Χû�г��꣬�Ǻõ���ģ����Ӷ������������֣�");
	}
	else{
		printf("\t������Χ���ܳ��꣬��ƻ������ģ����Ӷ�������Ϊ�����Χ�ڵ���Ѫ�ܼ����ĸ����������ӣ�"); 
	}
	
}

void pa_yao23(int yao23){
	if(yao23==20){
		printf("\t������ʿ,������Χ���ͺϱ�׼����������֣�\n");
	}
	else if(yao23==10){
		printf("\t������Ůʿ��������Χ���ϱ�����������֣�\n"); 
	}
	else{
		printf("\t������Χ̫���ˣ�������������ȷ��û������Ļ�����ô�������������Է��ֵķ��գ�\n");
	} 
}

int main(){
	
	ti_shi();
	ti_shi2();
    float bmi=BMI(ti,shen);//bmi�� 
    float whr=WHR(yao,tun);
    int yao21=yao23(yao,xingbie);
    float bfp=BFP(yao,jin,tun,xingbie,shen*100);
    float ffmi=FFMI(ti,shen,bfp/100);
    float bmr=BMR(shen,age,ti,xingbie);
    float tde=TDEE(bmr,huo);
    int yao2=yao23(yao,xingbie);
    printf("\n\tok!���Ľ������Ա���Ϊ��\n");
    printf("\t������֬��Ϊ��%.2f%%\n",bfp);
	pa_bfp(bfp,xingbie);
    printf("\t��������BMIָ��Ϊ��%.2f\n",bmi);
    pa_bmi(bmi);
    printf("\t�������α�Ϊ��%.2f\n",whr);
    pa_whr(whr,xingbie);
    pa_yao23(yao2);
    printf("\t����ȥ֬����ָ��Ϊ��%.2f\n",ffmi);
    printf("\t���Ļ�����л���ǣ�%.2f%%\n",bmr);
    printf("\t����ÿ������������Ϊ��%.2f\n",tde);
    printf("\tע�⣡��������Щ��������ȫ����������������ݣ���������������������ô����Ľ��Ҳ���д���");
    
}
