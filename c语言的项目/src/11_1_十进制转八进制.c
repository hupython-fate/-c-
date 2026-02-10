#include <stdio.h>
int main(void)
{
	int shu;
	int pa[60];
	int i=0;
	printf("请输入一个十进制数：");
	scanf("%d",&shu);
	while(shu!=0)
	{
	    pa[i]=shu%8;
	    shu=shu/8;
	    i++;
	 }
	
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",pa[j]);
	}
    return 0;
}//进制转化遵循除基取余法！ 
