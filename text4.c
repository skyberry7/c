#include<stdio.h>

int main()
{
	long double a=0,b=0,c=0;
	printf("��������������(�ÿո�����磺3 7)");
	scanf("%Lf %Lf",&a,&b);
	c=a,a=b,b=c;
	printf("a=%Lf,b=%Lf\n",a,b);
	
	
	return 0;
	
}
