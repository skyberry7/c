#include<stdio.h>

int main()
{
	int i=0;
	int n; 
	int sum=0;
	
	printf("ÇëÊäÈënµÄÖµ");
	scanf("%d",&n); 
	for(i=0;i<=n;i++){
		sum+=i;
	}
	printf("1+2+3+...+n=%d",sum);
	
	
	
	return 0;
 } 
