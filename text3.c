#include<stdio.h>

int main()
{
	float a,b,c,d;
	float k,h;
	printf("请输入两个坐标:例：(2.4,3.5)(3.0,7.0)\n");
	printf("请在英文输入法下输入\n") ; 
	scanf("(%f,%f)(%f,%f)",&a,&b,&c,&d);
	//printf("%f%f%f%f",a,b,c,d);
	k=(b-d)/(a-c);
	h=b-k*a;
	printf("y=%fx+%f",k,h);
	return 0;
}
