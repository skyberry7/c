#include<stdio.h>

int main()
{
	int i=0;
	int n; 
	int sum=0;
	
	printf("ÇëÊäÈënµÄÖµ");
	scanf("%d",&n); 
	do{
		sum+=i;
		i++;
	}while(i<=n);
	printf("1+2+3+...+n=%d",sum);
	
	
	
	return 0;
 } 
