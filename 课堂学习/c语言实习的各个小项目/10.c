#include <stdio.h>
#include <math.h>

int jie(int x)
{
	int i;
	int ll=1;
	for(i=1;i<=x;i++)
		ll*=i;
	return ll;
}


int main(void)
{
	//s=pow(2,2)!+pow(3,2)!
	int s,k,ggg;
	//s=pow(2,2);
	//k=pow(3,2);
	s=2*2;
	k=3*3;
	ggg=jie(s)+jie(k);

	printf("s的值为%d",ggg);
	return 0;
}
