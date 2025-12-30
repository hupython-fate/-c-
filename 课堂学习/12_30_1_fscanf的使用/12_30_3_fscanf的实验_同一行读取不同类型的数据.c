#include  <stdio.h>
#include <stdlib.h>
typedef struct{
	char name[20];
	char age[20];
	int *a;
	char x;
}stu;

int main(void)
{
	stu *kkk=(stu *)malloc(sizeof(stu));//使用指针要为它分配内存。

	kkk->a=(int *)malloc(sizeof(int)*4);//为a分配内存空间。
	//printf("xxx");

	FILE *p;
	if((p=fopen("twe_readfile.txt","r"))==NULL)
	{
		printf("error!!");
		return 0;
	}
	
	fscanf(p,"%s %s %d %d %d %d %c",kkk->name,kkk->age,&kkk->a[0],&kkk->a[1],&kkk->a[2],&kkk->a[3],&kkk->x);
	
	printf("%s %s %d %d %d %d %c",kkk->name,kkk->age,kkk->a[0],kkk->a[1],kkk->a[2],kkk->a[3],kkk->x);
	return 0;
}
