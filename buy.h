#ifndef __BUY_H_
#define __BUY_H_
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"look.h"
#include"add.h"
#include"recharge.h"
#include"pay.h"
#include"reject.h
int pocket;
struct goods
{
	int order;
	char sign[20];
	char name[20;
	float price;
	int num;
	char local[20];
}
struct goods options[5];
struct goods added[20];
void buy()
{
	int j;
	printf("******请选择所需服务 1.查看商品   2.添加进购物车  3.充值   4.付款   5.退货*****\n");
	scanf("%d",&j);
	switch(j)
	{
	case 1:look();break;
	case 2:add();break;
	case 3:recharge();break;
	case 4:pay();break;
	case 5:reject();break;
	}

}


#endif
