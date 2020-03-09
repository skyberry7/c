#include<stdio.h>

int main()
{
	int n;
	int a1,a2,a3,a4,a5,a6,a7,a8;
	printf("请输入一个0~255之间的数");
	
	scanf("%d",&n);

	a1=n%2;
	n/=2;
	a2=n%2;
	n/=2;
	a3=n%2;
	n/=2;	
	a4=n%2;
	n/=2;	
	a5=n%2;
	n/=2;	
	a6=n%2;
	n/=2;	
	a7=n%2;
	n/=2;
	a8=n%2;
	n/=2;
	printf("%d",a8);
	printf("%d",a7);
	printf("%d",a6);
	printf("%d",a5);
	printf("%d",a4);
	printf("%d",a3);
	printf("%d",a2);
	printf("%d",a1);
	return 0;
 } 
