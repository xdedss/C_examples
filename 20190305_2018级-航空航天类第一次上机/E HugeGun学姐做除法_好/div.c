#include <stdio.h>

int main(){
	/*
	要点：
	要求精度较高所以最好用double
	输出%.7lf （.7=保留7位小数 ，lf=double类型） 
	*/
	
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double result = (a / (b / c) + (a / b) / c) / 2;
	printf("%.7lf", result);
	return 0;
}
