#include <stdio.h>
int main(void)
{
	//什么是四方定理？就是你任意输入一个自然数，都能用四个数的平方和来表示。
	int x;
	int i,j,k,g;
	printf("请输入一个自然数：");
	scanf("%d",&x);
	if(x>0)
	{
		for(i=0;i<x+100;i++)
		{
			for(j=0;j<x+100;j++)
			{
				for(k=0;k<x+100;k++)
				{
					for(g=0;g<x+100;g++)
					{
						if(i*i+j*j+k*k+g*g==x)
						{
							printf("%d %d %d %d 这是四个数的平方和等于%d\n",i,j,k,g,x);
						}
					}
				}
			}
		}
	}
	else 
	{
		printf("您输入的数不是自然数，请重新输入。");
	}
	return 0;
}
