#include<stdio.h>
int f2(int n);
int f1(int n);
int main(){
	int n;
	printf("������n��ֵ\n");
	scanf("%d",&n);
	
	printf("�Ǻ����ݹ����%d\n",f1(n));//�÷ǵݹ鷨
	
	printf("�����ݹ����%d\n",f2(n)) ;//�õݹ鷨 
	
	return 0;
} 
int f1(int n){       //�ǵݹ� 
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

int f2(int n){          //�����ݹ���� 
	if(n%2&&n>1){
		return f2(n-1)*3;
	}else if(n>1){
		return f2(n-1)*2;
	}else{
	return 1;
	}
}
