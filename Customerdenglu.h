#ifndef __CUSTOMERDENGLU_H_
#define __CUSTOMERDENGLU_H_
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Customerzhuce.h"
//#include<buy.h>
int Iscustomer(char q[20])
{
	//�ڹ˿������в�ѯ�Ƿ��Ѿ�ע��
	FILE *fp2;
	int flag2=0;
	if((fp2=fopen("C:\\Users\\lenovo\\Desktop\\customers.txt","r"))==NULL)//�򿪴洢�ļ�
	{
		printf("********�ļ��޷���********\n");
		exit(1);
	}
	for(int j=0;j<100;j++)
	{
		fscanf(fp2,"%s %s %s",cus[j].login2,cus[j].password2,cus[j].job2);//��ȡ����ṹ���е�����
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
	if((f2=fopen("C:\\Users\\lenovo\\Desktop\\customers.txt","rb"))==NULL)//�򿪴洢�ļ�
	{
		printf("********�ļ��޷���********\n");
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
	//�û�����֤
	char name[20];
	printf("*********���������ĵ�¼�˺�**********\n");
	while(1)
	{
            scanf("%s",name);
			if(Iscustomer(name))
				break;
			printf("*******�����˺ţ���δ����ע���뷵��ע��********\n");
	}
	//������֤
	char key[20];
	printf("**********��������������**********\n");
    while(1)
	{
		scanf("%s",key);
		if(Check(name,key))
			break;
		printf("**********�������������������������**********\n");
	}
	printf("��ӭ��½�û�����");
	//buy();
}
#endif