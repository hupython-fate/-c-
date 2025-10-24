#include <stdio.h> 
#define MAX_SHU 1000
struct stu{
	int age;
	char name[MAX_SHU];
	int xingbie;
	float shen;
	float ti;
	float shuchenji;
	float yuchenji;
	float yinchenji;
};

//写一个函数，用来输入学生的信息；
void shu_ru(struct stu student[]){
	printf("请输入您要输入的学生的总数：");
	int n;
	n=getchar();
	for (int i=1;i<n;i++){
	printf("请输入学生的名字:\n");
	scanf(" %s",student[i].name);//数组名本身就是地址，不用取地址符。 
	printf("请输入%s的年龄：\n",student[i].name);
	scanf("%d",&student[i].age);
	printf("请输入%s的性别，是男输入1，是女输入0；\n",student[i].name);
	scanf("%d",&student[i].xingbie);
	printf("请输入%s的身高（一米为单位）：\n",student[i].name);
	scanf("%f",&student[i].shen);
	printf("请输入%s的体重（以千克为单位）：\n",student[i].name);
	scanf("%f",&student[i].ti);
	printf("请输入%s的语文成绩：\n",student[i].name);
	scanf("%f",&student[i].yuchenji);
	printf("请输入%s的数学成绩：\n",student[i].name);
	scanf("%f",&student[i].shuchenji);
	printf("请输入%s的英语成绩：\n",student[i].name);
	scanf("%f",&student[i].yinchenji);
}
} 

int main() {
	struct stu student[MAX_SHU];
	shu_ru(student);
	return 0;
}
