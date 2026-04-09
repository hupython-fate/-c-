#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//关键的宏定义
#define A 1.2
#define B 1.375
#define C 1.55
#define D 1.725
#define E 1.9
#define ka_jiao_hu_huan 4.184

//共1个全局变量
extern int a;

//为了优化而增加的结构体
struct Aman   //结构体的声名应该放在函数声名的前面。有时侯，顺序也是很关健的。
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
	struct Aman *next;
};

//第二个结构体
struct health//每个人将根据输入的原始数据得到五个结果
{
	float BMI;
	float BMR;
	float BFP;
	float FFMI;
	float yao_tun_bi;
	struct health *next;
};

//5个子函数的声名
struct Aman *caret(int);//创建设链表函数的声明。
void ti_shi(struct Aman *q,int i);
struct health *health(struct Aman *head);
void print_health(struct health *head,struct Aman *kkk);
void printfile(struct Aman *head);





