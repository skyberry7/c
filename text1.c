#include<stdio.h>
int main()
{
	int a;
	int a1,a2,a3,a4,a5;
	printf("������һ��������5λ������");
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
				 printf("\n������5λ��\n��λ���ӵ�λ����λ��%d %d %d %d %d\n������%d%d%d%d%d\n",a1,a2,a3,a4,a5,a1,a2,a3,a4,a5);
				}
				else printf("\n������4λ��\n��λ���ӵ�λ����λ��%d %d %d %d\n������%d%d%d%d\n",a1,a2,a3,a4,a1,a2,a3,a4);
			}
			else printf("\n������3λ��\n��λ���ӵ�λ����λ��%d %d %d\n������%d%d%d\n",a1,a2,a3,a1,a2,a3);
		}
		else printf("\n������2λ��\n��λ���ӵ�λ����λ��%d %d\n������%d%d\n",a1,a2,a1,a2);
	}
	else printf("\n������1λ��\n��λ���ӵ�λ����λ��%d\n������%d\n",a1,a1);
	
	
	
	return 0;
 } 
