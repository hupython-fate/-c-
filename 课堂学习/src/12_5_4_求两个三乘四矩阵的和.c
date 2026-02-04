#include <stdio.h>
int main(void)
{
	//先让用户输入俩个三乘四矩阵的每个元素？这意味着用户得输入24次不同或者不同的数。
	int arr[2][3][4];//三维数组的尝试。
	int i,j,k,h=0,s=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<4;k++)
			{	
				h++;
				printf("请输入第%d个元素（%d/24）：",h,h);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	h=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<4;k++)
			{	
				/*h++;
				printf("%9d",arr[i][j][k]);
				if(h==5)
				{	
					h=0;
					printf("\n");
				}*/
				h=arr[i][j][k];
				s+=h;

			}
		}
	}
	printf("输入的元素的和为%d!\n",s);
	return 0;
}
