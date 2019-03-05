#include <stdio.h>
#include <math.h>

int main(){
	/*
	要点：
	PI的定义，精度不要写的太低
	平方根sqrt，使用前需要引入math.h 
	输出两位小数，%.2f ，不要写%6.2f 
	*/ 
	
	float l, r;
	float PI = 3.14159265f;
	scanf("%f %f", &l, &r);
	float h = sqrt(l * l - r * r);
	float s = PI * r * r;
	printf("%.2f", h * s / 3);
	return 0;
}
