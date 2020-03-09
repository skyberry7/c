#include<stdio.h>

int main(){
	int a=0,b=0,i=0,sum=0;

	printf("请输入一个数\n");
	scanf("%d",&a);
	printf("各位数字是：");
	do{
		b=a%10;
		i++;
		a=a/10;
		sum=10*sum+b;
		printf("%d",b);
		if(a!=0){printf(",");
		}
	}while(a!=0);
	
	printf("\n这个数的位数是%d\n逆序数是%d\n",i,sum);
	return 0;
} 
