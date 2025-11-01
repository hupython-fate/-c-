#include <stdio.h>
int main(void)//需求是什么？是问两次用户数入数字，然后不断的问用户输入数字或者输出数字之和。 
{
	float shu[100]={0};
	printf("请输入第1个数字：");
	scanf("%f",&shu[0]);
	printf("请输入第2个数字：");
	scanf("%f",&shu[1]);
	int i=1;
	do{
		printf("如果你想输入第三个数，请数入数字;否则，就输入字母a:");
		i++;
	}while(scanf("%f",&shu[i])==1);
	//怎么才能知道用户输入了多少个数字呢？
	//嗯，思考一下，
	//i就等于用户输入了多少个数吗？
	//试一下就知道了。
	//printf("%d",i); 
	//没错，i的值就等于用户数入的数字的项数。
	float asdf;
	float jkl=0.0;
	for(int j=0;j<=i;j++)//假如i等于3. 
	{
		asdf=shu[j];
		asdf=asdf+jkl;
		jkl=asdf;
	}
	printf("%.2f",asdf); 
	/*第一次循环时，j=0,0<3,jkl=0-->asdf=shu[0],asdf=shu[0]+0,jkl=asdf=shu[0]+0;-->j+1=1,
	第二次循环时，j=1,1<3,jkl=shu[0]+0-->asdf=shu[1],asdf=shu[1]+shu[0]+0,jkl=asdf=shu[1]+shu[0]+0;-->j+1=2. 
	第三次循环时，j=2,2<3,jkl=shu[0]+shu[1]+0-->asdf=shu[2],asdf=shu[1]+shu[0]+shu[2]+0,jkl=asdf=…；-->j+1=3.
	第四次循环时，j=3,3=3,jkl=shu[1]+shu[0]+shu[2]+0-->asdf=shu[3],asdf=shu[3]+shu[1]+shu[0]+shu[2]+0,jkl=asdf=……；-->j+1=4
	因为j=4,4<=3为假，所以没有第五次循环。 
	
	从运算看，这个程序用累加算法没有问题！ 
	
	*/ 
	return 0;
 } 
