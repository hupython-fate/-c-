#include <stdio.h>
int main()
{
	int shu;
	int i=0;
	int sss[60];
	printf("������һ��ʮ����������");
	scanf("%d",&shu);
	while(shu!=0)//����˵����4. 
	{
	    sss[i]=shu%2;//���������� 
	    shu=shu/2;
	//printf("%d\n",sss[i]);
	    i++;
    }
    for(int j=i-1;j>=0;j--)
	{
	    printf("%d",sss[j]);    	
    } 
	return 0; 
}
