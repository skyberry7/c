#include<stdio.h>

int main()
{
	unsigned int n;
	int a,b;
	int a1,a2,a3,a4;
	printf("������һ����λ��������");
	scanf("%d",&n);
	a=n;
	
	b=n%16;
	n/=16;
	b>9?(a1=b-10+'a'):(a1=b+'0');
	
	b=n%16;
	n/=16;
	b>9?(a2=b-10+'a'):(a2=b+'0');
	
	b=n%16;
	n/=16;
	b>9?(a3=b-10+'a'):(a3=b+'0');
	
	b=n%16;
	n/=16;
	b>9?(a4=b-10+'a'):(a4=b+'0');
	
	putchar(a1);
	putchar(a2);
	putchar(a3);
	putchar(a4);

	printf("\nʮ���������%x\n",a);
	printf("�Գ���Ľ���"); 
	(a4>'0')?putchar(a4):(n=a);
	(a3>'0')?putchar(a3):(n=a);
	(a2>'0')?putchar(a2):(n=a);
	(a1>'0')?putchar(a1):(n=a);
	
	return 0;
	
}
