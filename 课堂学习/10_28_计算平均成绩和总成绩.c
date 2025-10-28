#include <stdio.h>
int main()
{
	float a=0.0;
	float b=0.0;
	float c=0.0;
	float d=0.0;
	float e=0.0;
	float ee=0.0;
	printf("请输入学生的第一门成绩：");
	scanf("%f",&a);
	printf("\n请输入学生的第二门成绩:");
	scanf("%f",&b); 
	printf("\n请输入学生的第三门成绩:"); 
    scanf("%f",&c);
    printf("\n请输入学生的第四门成绩;");
    scanf("%f",&d);
    e=a+b+c+d;
    ee=(a+b+c+d)/4;
    printf("这个学生的平均成绩和总成绩分别是是%.2f分和%.2f分。\n",ee,e);
    return 0;
} 
