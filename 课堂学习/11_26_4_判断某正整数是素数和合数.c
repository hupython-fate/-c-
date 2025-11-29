#include <stdio.h>
int main(void)
{
	//简单来说： 一个素数只能被1和它自己整除。简单来说： 一个合数可以被比1和它本身小的数整除。
	//无论是素数还是合数，都大于1.
	//写出这个程序的难点是如何判断一个数是否是素数。
	int x,y,z;
	printf("请输入一个数让我判断这个数是素数还是合数：");
	scanf("%d",&x);
	if(x<2)
	{
		if(x==1)
		{
			printf("这个数既不是素数，又不是合数。");
		}
		else if(x<0)
		{
			printf("这个数不是自然数。");
		}
		else 
		{
			printf("素数必须是大于1的自然数，合数也一样。");
		}

	}
	else
	{
		for(y=2,z=x/2;y<=z;y++)
		{
			if(x%y==0)
			{
				printf("%d是合数。",x);
				break;
			}
		}
		if(y>z)
		{
			printf("%d是素数。",x);
		}



	}


	return 0;
}
