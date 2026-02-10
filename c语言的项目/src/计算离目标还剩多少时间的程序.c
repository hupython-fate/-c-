#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿
	//¿¿¿¿¿¿¿¿¿¿¿¿

	//¿¿¿¿¿¿
	long nian,yue,ri,nian_2,yue_2,ri_2,sum_day=0,i,j,z,YUE_SHU=12,RI_SHU=0,kk=0;
	long arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	//¿¿¿¿¿
	printf(">>>");
	scanf("%ld %ld %ld",&nian,&yue,&ri);
	printf(">>>");
	scanf("%ld %ld %ld",&nian_2,&yue_2,&ri_2);

	//¿¿¿¿¿
	for(i=nian;i<=nian_2;i++)
	{
		arr[1]=28;
		if((nian%4==0 && nian%100!=0) || nian%400==0)//¿¿¿¿¿¿¿¿
			arr[1]++;
		if(i==nian) j=yue-1;
		else j=0;
		if(i==nian_2) YUE_SHU=yue_2;
		else YUE_SHU=12;

		for(;j<YUE_SHU;j++)
		{
			z=1;
			RI_SHU=arr[j];
			if(kk==0)
			{
				z=ri;
				kk++;
			}
			if(i==nian_2 && j==yue_2-1)//¿¿¿¿¿¿¿¿¿¿¿
			{
				RI_SHU=ri_2-1;
			}
			for(;z<=RI_SHU;z++) sum_day++;
		}
	}

	//¿¿¿¿¿
	printf("%ld\n",sum_day);
    	return 0;
 } 
