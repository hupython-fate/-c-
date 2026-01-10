#include <stdio.h>

int main(void)
{
	int a=0,ou=0,ji=0,ou_sum=0,ji_sum=0;
	do{
		if(a%2==0 && a!=0)
		{
			ou++;
			ou_sum+=a;
		}
		else if(a!=0)
		{
			ji++;
			ji_sum+=a;
		}
		scanf("%d",&a);

	}while(a!=0);
	printf("%d %d      %d %d",ou,ou_sum/ou,ji,ji_sum/ji);

	return 0;
}
