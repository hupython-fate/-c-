#include <stdio.h>
#define QI 64
int main()
{
	const double CROP=2E16;
	double c,t;
	int co=1;
	printf("���̸���    ÿһ�����ӵ���        ���۵�����         ������������������\n");
	c=t=1.0;
	printf("%4d          %5.2e            %5.2e            %12.2e\n",co,c,t,t/CROP);
	while(co<QI)
    {
    	co++;
		c*=2.0;
		t+=c;
		printf("%4d          %5.2e            %5.2e            %12.2e\n",co,c,t,t/CROP);
	}
	printf("ok!");
	return 0;

}
