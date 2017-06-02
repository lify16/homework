#ifndef __CUSTOMERDENGLU_H_
#define __CUSTOMERDENGLU_H_
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Customerzhuce.h"
//#include<buy.h>
int Iscustomer(char q[20])
{
	//在顾客名单中查询是否已经注册
	FILE *fp2;
	int flag2=0;
	if((fp2=fopen("C:\\Users\\lenovo\\Desktop\\customers.txt","r"))==NULL)//打开存储文件
	{
		printf("********文件无法打开********\n");
		exit(1);
	}
	for(int j=0;j<100;j++)
	{
		fscanf(fp2,"%s %s %s",cus[j].login2,cus[j].password2,cus[j].job2);//读取保存结构体中的数据
	    if(strcmp(q,cus[j].login2)==0)
	       flag2++;
    }
	fclose(fp2);
		if(flag2>0)
			return 1;
		else
			return 0;
}
int Check(char p[20],char r[20])
{
	FILE *f2;
	if((f2=fopen("C:\\Users\\lenovo\\Desktop\\customers.txt","rb"))==NULL)//打开存储文件
	{
		printf("********文件无法打开********\n");
		exit(1);
	}
	int flag1=0;
	for(int k=0;k<100;k++)
	{
		fscanf(f2,"%s %s %s",cus[k].login2,cus[k].password2,cus[k].job2);
		if((strcmp(p,cus[k].login2)==0)&&(strcmp(r,cus[k].password2)==0))
				flag1++;
	}
	fclose(f2);
	if(flag1>0)
		return 1;
	else 
		return 0;
}
void customerdenglu()
{
	//用户名验证
	char name[20];
	printf("*********请输入您的登录账号**********\n");
	while(1)
	{
            scanf("%s",name);
			if(Iscustomer(name))
				break;
			printf("*******请检查账号，若未进行注册请返回注册********\n");
	}
	//密码验证
	char key[20];
	printf("**********请输入您的密码**********\n");
    while(1)
	{
		scanf("%s",key);
		if(Check(name,key))
			break;
		printf("**********您输入的密码有误，请重新输入**********\n");
	}
	printf("欢迎登陆用户中心");
	//buy();
}
#endif