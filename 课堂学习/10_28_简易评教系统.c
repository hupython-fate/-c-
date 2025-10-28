#include <stdio.h>
#define shi 0.1
#define san 0.3
#define wu 0.5
int main()
{
	float a=0.0;
	float b=0.0;
	float c=0.0;
	float d=0.0;
	float jiao=0.0;
	while(1)
	{
	    printf("请输入教务处评分：");
	    scanf("%f",&a);
	    if(a>100 || a<1)
	    {
	    	printf("分值为1~100分，请重新输入，不要超出这个范围！");
	    	continue;
		}
		else
		break; 
    }
    while(1)
	{
	    printf("请输入督导处评分：");
	    scanf("%f",&b);
	    if(b>100 || b<1)
	    {
	    	printf("分值为1~100分，请重新输入，不要超出这个范围！");
	    	continue;
		}
		else
		break;
    }
    while(1)
	{
	    printf("请输入学生评分：");
	    scanf("%f",&c);
	    if(c>100 || c<1)
	    {
	    	printf("分值为1~100分，请重新输入，不要超出这个范围！");
	    	continue;
		}
		else
		break;
    }
    while(1)
	{
	    printf("请输入系部自评分：");
	    scanf("%f",&d);
	    if(d>100 || d<1)
	    {
	    	printf("分值为1~100分，请重新输入，不要超出这个范围！");
	    	continue;
		}
		else
		break;
    }
    jiao=shi*a+shi*b+wu*c+san*d;
    if(jiao<=70)
    {
    	printf("该教师被评为不称职！");
	}
	else if(jiao>70 && jiao<90)
	{
		printf("该教师是称职的！"); 
	}
	else{
		printf("这个教师是优秀的！");
	} 
 } 
