#include <stdio.h>
int main(void)
{
	int k;
	int kk;
	int kkk;
	
	while(1)
	{
	printf("请输入一个非负整数：");
	scanf("%d",&k);
	if(k==0 || k<0) {printf("您输入的数不是非负整数！\n");
	continue;}
	else break;
    }
    while(1)
	{
	printf("请输入第二个非负整数：");
	scanf("%d",&kk);
	if(kk==0 || kk<0) {printf("您输入的数不是非负整数！\n"); continue;}
	else break; 
    }
	kkk=kk%k;
	printf("%4d %% %4d is %4d",kk,k,kkk);
	while(kk>0)
	{
        printf("\n请输入一个数（该数应小于零）：");
        scanf("%d",&kk);
        if(kk>0 && kk!=0){
		kkk=kk%k;
		printf("%4d %% %4d is %4d",kk,k,kkk); 
		}
		else printf("\ndone!");
    }
	return 0;
 } 
