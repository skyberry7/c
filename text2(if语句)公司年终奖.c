#include<stdio.h>

int main(){
	float prf,bon;
	
	printf("请输入利润（单位：万元）\n如利润为10.5万元则应输入\n10.5\n");
	scanf("%f",&prf);
	if(prf<10){
		bon=prf*0.1;
		printf("奖金总额为%f(万元)",bon);
	}
	else if(prf<20){
		bon=1+0.075*(prf-10); 
		printf("奖金总额为%f(万元)",bon);
		}else if(prf<40){
			bon=1+0.75+0.05*(prf-20);
			printf("奖金总额为%f(万元)",bon);
			}else if(prf<60){
				bon=1+0.75+1+0.03*(prf-40);
				printf("奖金总额为%f(万元)",bon);
				}else if(prf<100){
					bon=1+0.75+1+0.6+0.015*(prf-60);
					printf("奖金总额为%f(万元)",bon);
					}else {
						bon=1+0.75+1+0.6+0.6+(prf-100)*0.01;
						printf("奖金总额为%f(万元)",bon);
					}
	return 0;
}

