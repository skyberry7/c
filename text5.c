#include<stdio.h>

int main(){
	int a=0,b=0,i=0,sum=0;

	printf("������һ����\n");
	scanf("%d",&a);
	printf("��λ�����ǣ�");
	do{
		b=a%10;
		i++;
		a=a/10;
		sum=10*sum+b;
		printf("%d",b);
		if(a!=0){printf(",");
		}
	}while(a!=0);
	
	printf("\n�������λ����%d\n��������%d\n",i,sum);
	return 0;
} 
