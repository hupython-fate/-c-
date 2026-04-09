#include <stdio.h>
struct aili{
int age;
int xingbie;
char hair[20];
char skin[20];
float shen_gao;
char zhi_ye[20];
}

struct aili mofan={20,1,"棕","黄",178,"法师"};
struct aili jiqianming={28,1,"黑","黄",185,"战士"};
struct aili	chenling={19,0,"白","白",165,"僧侣"};
struct aili hanyu={21,1,"黄","白",185,"盗贼"};



void mao_xian_kkk()
{
	printf("\n不管方式是什么，我都赚到钱了，并且积累到了不少的名声（也许是好的，也许是坏的），我该去招慕队友，正式开始冒险了。");
	printf("\n你有以下几个选项：");
}