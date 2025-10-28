#include <stdio.h>
#define qi 7
int main()
{
	int zou=0;
	int day=1;
	int yu=0;
	while(day>0)
	{
	    printf("\n请输入天数：");
	    scanf("%d",&day);
	    zou=day/qi;
	    yu=day%qi;
	    printf("\n您渡过了%d周%d天的日子。",zou,yu);
    }
 } 
