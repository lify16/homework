#include<stdio.h>
#include<string.h>
#include"Zhuce1.h"
#include"Denglu1.h"
void main()
{
	int i;
	printf("1.ע��  2.��¼\n");
	scanf("%d",&i);
	switch(i)
	{
	case 1:Zhuce1();break;
	case 2:Denglu1();break;
	}
}
