#include<stdio.h>
int f2(int n);
int f1(int n);
int main(){
	int n;
	printf("请输入n的值\n");
	scanf("%d",&n);
	
	printf("非函数递归调用%d\n",f1(n));//用非递归法
	
	printf("函数递归调用%d\n",f2(n)) ;//用递归法 
	
	return 0;
} 
int f1(int n){       //非递归 
	int i=1;
	int s=1;
	if(n>1){
	do{
		if((i+1)%2){
			s=s*3;
		}else{
			s=s*2;
		}
		i++;
	}while(i<n);
	}
	return s;
}

int f2(int n){          //函数递归调用 
	if(n%2&&n>1){
		return f2(n-1)*3;
	}else if(n>1){
		return f2(n-1)*2;
	}else{
	return 1;
	}
}
