#include <stdio.h>
#define A 100 //原始投资
#define B 0.1 //10%的单利息
#define C 0.05  //5%的复利息

int main(void)
{
	double ann=A;
	double jojo=A;
	int nian=0;
	double j=0,k=A;
	while(j+A>=k)//当jojo的投资额大于ann时，条件为假，循环终止。
	{
		nian++;
		ann=A;
		ann=ann*B;
		j=j+ann;//记住最后要加A。
		
		jojo=k*C;
		k=k+jojo;
		printf("第%d年时，ann的投资额为%lf，jojo的投资额为%lf。\n",nian,j+A,k);
	}
//答案是27年，只需要27年，5%的复利息就会超过10%的单利息。	
	return 0;
}
