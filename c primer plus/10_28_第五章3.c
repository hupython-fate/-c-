#include <stdio.h>
#define qi 7
int main()
{
	int zou=0;
	int day=1;
	int yu=0;
	while(day>0)
	{
	    printf("\n������������");
	    scanf("%d",&day);
	    zou=day/qi;
	    yu=day%qi;
	    printf("\n���ɹ���%d��%d������ӡ�",zou,yu);
    }
 } 
