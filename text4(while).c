#include<stdio.h>

int main()
{
	int i=0;
	int n; 
	int sum=0;
	
	printf("������n��ֵ");
	scanf("%d",&n); 
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("1+2+3+...+n=%d",sum);
	
	
	
	return 0;
 } 
