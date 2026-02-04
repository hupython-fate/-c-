#include <stdio.h>

int shushu(int x)//设制一个函数，如果输入的数是素数，就返回它本身，如果不是素数，就返回0.
{
	if(x<=1)
		return 0;
	int a,b;
	for(a=2;a<=x/2;a++)
	{
		if(x%a==0)
			break;
	}
	if(a>x/2)
		return x;
}



int main(void)
{
	int x,y,z;
	int yy,zz,h;
	int kkk=0;
	int asdf=0;
	for(x=6;x<=50;x++)
	{
		kkk++;
		asdf=0;
		for(y=3;y<50;y++)
		{
			for(z=3;z<50;z++)
			{
				yy=shushu(y);
				zz=shushu(z);
				if(x%2==0 && x==yy+zz)
				{
					h++;
					printf("%d,%d == %d + %d\n",h,x,yy,zz);
					asdf=1;
					break;

				}

			}
			if(asdf) break;
		}
	}
	if(h==23)
		printf("歌德巴赫猜想是正确的。\n");
	else 
		printf("猜想是错误的。\n");
	return 0;

}
