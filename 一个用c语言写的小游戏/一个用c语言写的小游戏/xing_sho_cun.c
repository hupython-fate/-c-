#include <stdio.h>
extern void mao_xian_kkk();
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
	scanf(" %c",&fg);
	if(fg=='A' || fg=='a')
	{
	    printf("美貌如花的八百斤富婆拿着钢丝球、皮鞭、蜡烛一震一震的走了过来，我强忍住逃跑的心情，嗯，接下来就是我所不能言的事情了。");
	    mao_xian_kkk();
	}
	else if(fg=='B' || fg=='b')
	{
	   printf("做任务，我坚不可摧，我在任务中升华！");
	   mao_xian_kkk();
	}
	else if(fg=='C' || fg=='c')
	{
	    printf("老父亲沉默了，妈妈跟我说了很多家常~~");
		mao_xian_kkk();
	}
	else if(fg=='D' || fg=='d')
	{
	    printf("我被打过，我被骂过，但是我有钱了。");
		mao_xian_kkk();
	}
}