#ifndef __ADD_H_
#define __ADD_H_
#include"buy.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"recharge.h"
void add()
{	
	struct goods add;
	int i,j;
	printf("*******��������Ҫ��ӵ���Ʒ������********\n");
    scanf("%d",&i);
	printf("********��������Ҫ��ӵ���Ŀ********\n");
    scanf("%d",&j);
	FILE *fp1;
	if((fp1=fopen("C:\\Users\\leno\\Desktop\\cart.txt","ab+"))==NULL)
	{
		printf("********�ļ����ܱ���********\n");
			exit(1);
	}
	for(int j=0;j<10;j++)
		{
			fscanf(fp1,"%d%s%s%l%d%s",options[j].order,options[j].sign,options[j].name,
	             options[j].price,options[j].num,options[j].local);
				if(options[j].order==i)
				{
					add.order=i;
					add.sign==options[j].sign;
					add.name==options[j].name;
					add.price=options[j].price;
					add.num=j;
					add.local==options[j].local;
                }
	    }
	fwrite(&add,sizeof(struct goods),1,fp1);
	fclose(fp1);
	recharge();
}

#endif