#include <stdio.h>
int main(void)
{
	int k;
	int kk;
	int kkk;
	
	while(1)
	{
	printf("������һ���Ǹ�������");
	scanf("%d",&k);
	if(k==0 || k<0) {printf("������������ǷǸ�������\n");
	continue;}
	else break;
    }
    while(1)
	{
	printf("������ڶ����Ǹ�������");
	scanf("%d",&kk);
	if(kk==0 || kk<0) {printf("������������ǷǸ�������\n"); continue;}
	else break; 
    }
	kkk=kk%k;
	printf("%4d %% %4d is %4d",kk,k,kkk);
	while(kk>0)
	{
        printf("\n������һ����������ӦС���㣩��");
        scanf("%d",&kk);
        if(kk>0 && kk!=0){
		kkk=kk%k;
		printf("%4d %% %4d is %4d",kk,k,kkk); 
		}
		else printf("\ndone!");
    }
	return 0;
 } 
