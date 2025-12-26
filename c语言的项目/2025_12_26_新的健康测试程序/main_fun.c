#include "main.h"

//变量的定义
float jin=0.0,yao=0.0,age=0.0,shen=0.0,ti=0.0,tun=0.0,huo=0.0;
int xingbie=0,kkk=0;
char huo_don='l';

//第1个函数
float BFP()
{  
	switch(xingbie)
	{
		case 1:
        		return (495/(1.0324-0.19077*log10(yao-jin)+0.15456*log10(shen*100)))-450;
        		break;
		case 0:
            		return (495/(1.29579-0.35004*log10(yao+tun-jin)+0.22100*log10(shen*100)))-450;
			break;
		defult:
                	return -1;
        }
}

//第2个函数
float FFMI(float bfp)
{
	return (ti*(1-bfp))/pow(shen,2);
}

//第3个函数
float BMR()
{     
	switch(xingbie)
	{
		case 1:
        		return 10*ti+6.25*shen*100-5*age+5;
			break;
		case 0:
               		return 10*ti+6.25*shen*100-5*age-161;
			break;
		defult:
                	return -1;
	}
}

//第4个函数
void ti_shi()
{	
	printf("======== Welcome to the health test program!  ======\n");
	printf("========Please get a soft measuring tape.  =========\n");
	printf("\a");
	while(1)
	{
	printf("\nPlease enter your height in m：");
	scanf("%f",&shen);
	    if(shen>2.0 || shen<1)
	    {
            	printf("\nYour height is wrong!!");
	        continue;
	    }
	    else break;
    	}

   	 while(1)
	{
    	printf("\nPlease enter your weight in kg：");
    	scanf("%f",&ti);
        if(ti>200 || ti<20)
	    {
    	    printf("\nYour weight is wrong!!");
    	    continue;
    	}
	    else
	    break;
	}
	
	while(1)
	{
	printf("\nPlease enter your age：");
	scanf("%f",&age);
	    if(age>100 || age<3)
    	{
	    	printf("\nYour age is wrong!!");
		    continue;
    	}
	    else
	    break;
	}
	
	while(1)
	{
	printf("\nPlease enter your gender：");
	scanf("%d",&xingbie);
	    if(xingbie!=0 && xingbie!=1)
	    {
	    	printf("\n0 for female, 1 for male.");
	    	continue;
	    }
	    else
	    break;
    	}

    	while(1)
	{
	printf("\nPlease enter your neck size in cm：");
	scanf("%f",&jin);
	     if(jin>50 || jin<20)
	    {
		    printf("\nYour neck size is wrong!!");
		    continue;
	    }
	    else
	    break;
    	}

   	 while(1)
	{
	printf("\nPlease enter your waist size in cm:");
	scanf("%f",&yao);
	    if(yao>90 || yao<50)
	    {
		    printf("\nYour waist size is wrong!!");
		    continue;
    	}
	    else
	    break;
	}
	
	while(1)
	{
		printf("\nPlease enter your hip size in cm:");
		scanf("%f",&tun);
		if(tun>110 || tun<50)
	    	{
	    		printf("\nYour hip size is wrong!!");
	    		continue;
    		}
	   	 else break;
    	}

    	while(1)
	{
	int asdfghj=0;
	printf("\nPlease enter your activity level：\n");
	printf("a, Sedentary (office work)\n");
	printf("b,Light activity (exercise 1-3 days a week)\n");
	printf("c,Moderate activity (exercise 3-5 days a week)\n");
	printf("d,Very active (hard exercise 6-7 days a week)\n");
	printf("e,Professional athlete\n");
    	printf("______\b\b\b\b");
	scanf(" %c",&huo_don);
	switch(huo_don)
	{
		case 'a':huo=A;asdfghj=1;
break;
		case 'A':huo=A;asdfghj=1;
break;
		case 'b':huo=B;asdfghj=1;
break;
		case 'B':huo=B;asdfghj=1;
break;
		case 'c':huo=C;asdfghj=1;
break;
		case 'C':huo=C;asdfghj=1;
break;
		case 'D':huo=D;asdfghj=1;
break;
		case'd':huo=D;asdfghj=1;
break;
		case 'e':huo=E;asdfghj=1;
break;
		case 'E':huo=E;asdfghj=1;
break;
		defult:
			printf("Your choice is wrong. Please enter again.");
			continue;
	}
	if(asdfghj) break;
    }
}

