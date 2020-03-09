#include<stdio.h>

int main()
{
	int a1,a2,a3,a4,a5,a6;
	int sum;
	float ave;
	printf("请输入六门成绩；（例:97 96 95 98 99 93）");
	scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6);
	sum=a1+a2+a3+a4+a5+a6;
	ave=sum*1.0/6;
	printf("你的总分为:%d，平均分为：%.1f",sum,ave);
	
	return 0;
	
}
