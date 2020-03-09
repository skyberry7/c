#include<stdio.h>

int main()
{
	int thisyear=2017;
	int a,b,c;
	int old;
	printf("请输入你的生日：(例：1900-01-01)\n");
	scanf("%d-%d-%d",&a,&b,&c);
	old=thisyear-a;
	printf("你的年龄是：%d\n");
	 
	return 0;
 } 
