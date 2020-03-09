#include<stdio.h>

int main(){
	float prf,bon;
	int cnt;
	printf("请输入利润（单位：万元）\n如利润为10.5万元则应输入\n10.5\n");
	scanf("%f",&prf);
	cnt=prf/10;
	switch(cnt)
	{
		case 0:bon=prf*0.1;
				printf("奖金总额为%f(万元)",bon);
				break;
		case 1:bon=1+0.075*(prf-10); 
				printf("奖金总额为%f(万元)",bon);
				break;
		case 2:
		case 3:bon=1+0.75+0.05*(prf-20);
			printf("奖金总额为%f(万元)",bon);
			break;
		case 4:
		case 5:bon=1+0.75+1+0.03*(prf-40);
				printf("奖金总额为%f(万元)",bon);
				break;
		case 6:
		case 7:
		case 8:
		case 9:bon=1+0.75+1+0.6+0.015*(prf-60);
					printf("奖金总额为%f(万元)",bon);
					break;
		default:bon=1+0.75+1+0.6+0.6+(prf-100)*0.01;
				printf("奖金总额为%f(万元)",bon);
		
	}
	return 0;
}


	

