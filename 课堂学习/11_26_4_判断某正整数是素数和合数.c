#include <stdio.h>
int main(void)
{
	//简单来说： 一个素数只能被1和它自己整除。简单来说： 一个合数可以被比1和它本身小的数整除。
	//无论是素数还是合数，都大于1.
	int a=1,b,d,c;
	/*while(a<10)
	{
		for(d=0;d<10;d++)
		{
			for(b=0;b<10;b++)
			{
				if(a%1==0 && a%a==0)
				{
					printf("%d是素数。\n",a);
					break;
				}
				else if(a % (c=(b<a?b:a))==0 && a % (d=(a<1?a:1))==0)
				{
					printf("%d是合数。\n",a);
					break;
				}
			}
		}
		a++;
	}*/
	return 0;
}
