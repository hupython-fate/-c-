#include <stdio.h>
#include <math.h>
//关键的宏定义
#define A 1.2
#define B 1.375
#define C 1.55
#define D 1.725
#define E 1.9
#define ka_jiao_hu_huan 4.184

//共十个全局变量
extern float jin,yao,age,shen,ti,tun,huo;
extern int xingbie,kkk;
extern char huo_don;

//5个子函数的声名
void ti_shi();
float BFP();
float FFMI(float);
float BMR();

//为了优化而增加的结构体
struct Aman
{
	char name[20];
	float jin;
	float xiong;
	float yao;
	float tun;
	int age;
	float shen;
	float ti;
	float huo;
	int xingbie;
};
