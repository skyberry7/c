#include<stdio.h>

int main(){
	float prf,bon;
	
	printf("���������󣨵�λ����Ԫ��\n������Ϊ10.5��Ԫ��Ӧ����\n10.5\n");
	scanf("%f",&prf);
	if(prf<10){
		bon=prf*0.1;
		printf("�����ܶ�Ϊ%f(��Ԫ)",bon);
	}
	else if(prf<20){
		bon=1+0.075*(prf-10); 
		printf("�����ܶ�Ϊ%f(��Ԫ)",bon);
		}else if(prf<40){
			bon=1+0.75+0.05*(prf-20);
			printf("�����ܶ�Ϊ%f(��Ԫ)",bon);
			}else if(prf<60){
				bon=1+0.75+1+0.03*(prf-40);
				printf("�����ܶ�Ϊ%f(��Ԫ)",bon);
				}else if(prf<100){
					bon=1+0.75+1+0.6+0.015*(prf-60);
					printf("�����ܶ�Ϊ%f(��Ԫ)",bon);
					}else {
						bon=1+0.75+1+0.6+0.6+(prf-100)*0.01;
						printf("�����ܶ�Ϊ%f(��Ԫ)",bon);
					}
	return 0;
}

