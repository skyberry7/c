#include<stdio.h>   //数字位数和逆序数
int main()
{
	int a;
	int a1,a2,a3,a4,a5;
	printf("请输入一个不多余5位的整数");
	scanf("%d",&a);
	a1=a%10;
	a/=10;
	if(a>0){
		a2=a%10;
		a/=10;
		if(a>0){
			a3=a%10;
			a/=10;
			if(a>0){
			a4=a%10;
			a/=10; 
			if(a>0){
				a5=a%10;
				a/=10;
				 printf("\n数字是5位数\n各位数从低位到高位是%d %d %d %d %d\n逆序数%d%d%d%d%d\n",a1,a2,a3,a4,a5,a1,a2,a3,a4,a5);
				}
				else printf("\n数字是4位数\n各位数从低位到高位是%d %d %d %d\n逆序数%d%d%d%d\n",a1,a2,a3,a4,a1,a2,a3,a4);
			}
			else printf("\n数字是3位数\n各位数从低位到高位是%d %d %d\n逆序数%d%d%d\n",a1,a2,a3,a1,a2,a3);
		}
		else printf("\n数字是2位数\n各位数从低位到高位是%d %d\n逆序数%d%d\n",a1,a2,a1,a2);
	}
	else printf("\n数字是1位数\n各位数从低位到高位是%d\n逆序数%d\n",a1,a1);
	
	
	
	return 0;
 } 
