#include "main.h"

//变量的定义
int a;

//第1个函数
struct health *health(struct Aman *head)//把用户的数据进行处理的第二个链表
{
	head=head->next;
	int i;
	struct health *q,*q1,*q2;
	if((q=(struct health*)malloc(sizeof(struct health)))==NULL)
	{
		printf("head point void error!!!");
		return 0;
	}
	q->next=NULL;
	q2=q;
	//这里写a，要把a设为全局变量，
	for(i=0;i<a;i++)
	{
		if((q1=(struct health *)malloc(sizeof(struct health)))==NULL)
		{
			printf("error!!");
			return 0;
		}
		q1->BMI=head->ti/head->shen*head->shen;//建立映射关系。
		if(head->xingbie==1)
		{
			q1->BMR=10*head->ti+6.25*head->shen*100-5*head->age+5;
			q1->BFP=(495/(1.0324-0.19077*log10(head->yao-head->jin)+0.15456*log10(head->shen*100)))-450;
		}
		else 
		{
			q1->BMR=10*head->ti+6.25*head->shen*100-5*head->age-161;
			q1-BFP=(495/(1.29579-0.35004*log10(head->yao+head->tun-head->jin)+0.22100*log10(head->shen*100)))-450;
		}
		q1->BFP=(head->ti*(1-q1->BFP))/pow(head->shen,2);
		q1->yao_tun_bi=head->yao/head->tun;

		//接下来处理这个链表的指针域。
		q2->next=q1;//把这个结点的指针放入前一个结点的指针域；
		q2=q1;//然q指向现在这个结点，也就是下一个结点的上一个结点。
	}
	q1->next=NULL;//把最后一个结点的指针域设为NULL；
	return q;//返回这个单向链表的头结点。
}

//第2个用来把用户输入的数据变成文件的函数
void printfile(struct Aman *head)
{
	char file_name[100];
	printf("请输入原始数据文件名:");
	fgets(file_name,100,stdin);
	
	//需要去除字符串末尾的换行符和加上".txt"的后缀。
	int k=strlen(file_name);
	if(k>0 && file_name[k-1]=='\n')//去除换行符
		file_name[k-1]='\0';
	//使用字符串联接函数
	strcat(file_name,".txt");//加上".txt"的后缀
	
	FILE *p;
	if((p=fopen(file_name,"w"))==NULL)
	{
		printf("error!!");
		return 0;
	}
	//头指针的数据域为空，所以
	head=head->next;

	fprintf(p,"姓名   年龄    性别    身高    体重    颈围     胸围      腰围     臀围      活动系数\n");
	//使用while循环加字符串写fprintf
	while(head!=NULL)
	{
		fprintf(p,"%s    %d   %d    %.2f   %.2f    %.2f   %.2f    %.2f      %.2f      %.2f ",head->name,head->age,head->xingbie,head->shem,head->ti,head->jin,head->xiong,head->yao,head->tun,head->huo);
		head=head->next;
	}
	//如果没有意外的话，这个函数就这样写好了。
}

//第三个函数
void print_health(struct health *head,struct Aman *kkk)
{
	char file_name[100];
	printf("请输入结果数据文件名:");
	fgets(file_name,100,stdin);
	
	//需要去除字符串末尾的换行符和加上".txt"的后缀。
	int k=strlen(file_name);
	if(k>0 && file_name[k-1]=='\n')//去除换行符
		file_name[k-1]='\0';
	//使用字符串联接函数
	strcat(file_name,".txt");//加上".txt"的后缀
	
	FILE *p;
	if((p=fopen(file_name,"w"))==NULL)
	{
		printf("error!!");
		return 0;
	}
	//头指针的数据域为空，所以
	head=head->next;

	fprintf(p,"姓名   年龄    性别    BMI	BMR	BFP	FFMI	臀腰比\n");
	//使用while循环加字符串写fprintf
	while(head!=NULL)
	{
		fprintf(p,"%s    %d   %d    %.2f   %.2f    %.2f   %.2f    %.2f      %.2f      %.2f ",head->name,head->age,head->xingbie,head->shem,head->ti,head->jin,head->xiong,head->yao,head->tun,head->huo);
		head=head->next;
	}
	//如果没有意外的话，这个函数就这样写好了。
}

//第4个函数
void ti_shi(struct Aman *q,int i)
{	
	char ch,huo_don;
	printf("======== Welcome to the health test program!  ======\n");
	printf("========Please get a soft measuring tape.  =========\n");
	printf("\a");
	printf("请输入第%d个人的名字：");
	scanf("%s",&q->name);
	while(1)
	{
		printf("\nPlease enter %d your height in m：",i+1);
	    	if((scanf("%f",&q->shen))!=1 || q->shen>2.0 || q->shen<1)
	    	{
			while((ch = getchar()) != '\n' && ch != EOF);//避免输入非数字进入死循环
            		printf("\nYour height is wrong!!");
	        	continue;
	    	}
	    	else break;
    	}

   	 while(1)
	{
    		printf("\nPlease enter %d your weight in kg：",i+1);
       	 	if((scanf("%f",&q->ti))!=1 || q->ti>200 || q->ti<20)
		{
		    	while((ch = getchar()) != '\n' && ch != EOF);
    	    		printf("\nYour weight is wrong!!");
    	    		continue;
    		}
	    	else break;
	}
	
	while(1)
	{
		printf("\nPlease enter %d your age：",i+1);
		if(scanf("%d",&q->age)!=1 || q->age>100 || q->age<3)
    		{	
			while((ch = getchar()) != '\n' && ch != EOF);
	    		printf("\nYour age is wrong!!");
		    	continue;
    		}
	    	else break;
	}
	
	while(1)
	{
		printf("\nPlease enter %d your gender：",i+1);
	    	if(scanf("%d",&q->xingbie)!=1 || q->xingbie!=0 && q->xingbie!=1)
	    	{	
			while((ch = getchar()) != '\n' && ch != EOF);
	    		printf("\n0 for female, 1 for male.");
	    		continue;
	    	}
	    	else break;
    	}

    	while(1)
	{
		printf("\nPlease enter %d your neck size in cm：",i+1);
	     	if(scanf("%f",&q->jin)!=1 || q->jin>50 || q->jin<20)
	    	{	
			while((ch = getchar()) != '\n' && ch != EOF);
		    	printf("\nYour neck size is wrong!!");
		    	continue;
	    	}
	    	else break;
    	}

   	 while(1)
	{
		printf("\nPlease enter %d your waist size in cm:",i+1);
	    	if(scanf("%f",&q->yao)!=1 || q->yao>90 || q->yao<50)
	    	{	
			while((ch = getchar()) != '\n' && ch != EOF);
		   	printf("\nYour waist size is wrong!!");
		    	continue;
    		}
	    	else break;
	}
	
	while(1)
	{
		printf("\nPlease enter %d your hip size in cm:",i+1);
		if(scanf("%f",&q->tun)!=1 || q->tun>110 || q->tun<50)
	    	{	
			while((ch = getchar()) != '\n' && ch != EOF);
	    		printf("\nYour hip size is wrong!!");
	    		continue;
    		}
	   	 else break;
    	}

    	while(1)
	{
	int asdfghj=0;
	printf("\nPlease enter %d your activity level：\n",i+1);
	printf("a, Sedentary (office work)\n");
	printf("b,Light activity (exercise 1-3 days a week)\n");
	printf("c,Moderate activity (exercise 3-5 days a week)\n");
	printf("d,Very active (hard exercise 6-7 days a week)\n");
	printf("e,Professional athlete\n");
    	printf("______\b\b\b\b");
	scanf(" %c",&huo_don);
	switch(huo_don)
	{
		case 'a':q->huo=A;asdfghj=1;
break;
		case 'A':q->huo=A;asdfghj=1;
break;
		case 'b':q->huo=B;asdfghj=1;
break;
		case 'B':q->huo=B;asdfghj=1;
break;
		case 'c':q->huo=C;asdfghj=1;
break;
		case 'C':q->huo=C;asdfghj=1;
break;
		case 'D':q->huo=D;asdfghj=1;
break;
		case'd':q->huo=D;asdfghj=1;
break;
		case 'e':q->huo=E;asdfghj=1;
break;
		case 'E':q->huo=E;asdfghj=1;
break;
		defult:
			printf("Your choice is wrong. Please enter again.");
			continue;
	}
	if(asdfghj) break;
    }
}


//要创建设一个动态链表
//第5个函数
struct Aman *caret(int a)//获取数据并存起来的第一个链表
{
	int i;
	struct Aman *p,*q,*head;
	if((head=(struct Aman*)malloc(sizeof(struct Aman)))==NULL)
	{
		printf("head point void error!!!");
		return 0;
	}
	//创建第一个结点
	head->next=NULL;
	p=head;
	for(i=0;i<a;i++)
	{
		if((q=(struct Aman*)malloc(sizeof(struct Aman)))==NULL)
		{
			printf("error!!!!!!");
			return 0;
		}
		//创建设新的结点。
		ti_shi(q,i);//改造了一下提示函数。
		p->next=q;//头结点的指针域放入第二个结点的指针。
		p=q;//把p指向新的结点。
	}
	//循环结束，恩，用于储存很多人的健康数据，用单链表还是循环链表？
	//用单向链表吧
	q->next=NULL;//最后一个结点的指针域为空
	return head;//理论上讲，这个函数会创造a+1个结点。
		    //这个函数取代了ti_shi函数，可以用来获取用户输入，比ti_shi函数更优雅，但是没有异常处理机制
		    //可不可以改造一下ti_shi函数，把指向结点的指针q和变量i作为函数的参数，传参给ti_shi()函数？
		    //然后，全局变量就可以删掉了。
}


