#include <stdio.h>
char fg='s';
void xing_sho_cun(){
	printf("++++++++++++++++\n");
	printf("当你没钱时，应该去赚钱；当你没实力时，你应该去提升实力。\n");
	printf("你有以下几个选项：\n");
	printf("A,吃软饭：虽然吃软饭有失男人的尊严，但是她或他给的实在太多了！就一次！就这一次！\n");
	printf("B,做任务：人应该在完成他人的委托中提升自己，换取金钱！\n");
	printf("C,求助：虽然我的父母没什么钱，但是他们会帮我的。\n");
	printf("D,其他：无论是当街乞讨还是偷鸡摸狗，总是一条路子！\n");
	printf("请输入你的选择：");
	scanf("%c",&fg);
	if(fg=='A' || fg=='a'){
	di_er_zhan();
	}
	else if(fg=='B' || fg=='b'){}
}