#include <stdio.h>

int main(){
	/*
	Ҫ�㣺
	Ҫ�󾫶Ƚϸ����������double
	���%.7lf ��.7=����7λС�� ��lf=double���ͣ� 
	*/
	
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double result = (a / (b / c) + (a / b) / c) / 2;
	printf("%.7lf", result);
	return 0;
}
