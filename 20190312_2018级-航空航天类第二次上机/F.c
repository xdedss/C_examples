#include <stdio.h>
#include <math.h>

int main(){
	double x, y, r, A, B, C;
	scanf("%lf %lf %lf", &x, &y, &r); 
	scanf("%lf %lf %lf", &A, &B, &C);
	//�״�㣺
	//���Ӿ���ֵ
	// ��ʽ��Ǵ��� Cǰ���Ǽ��� 
	double distance = (double)abs(A * x + B * y - C) / sqrt(A * A + B * B);
	if(distance - r == 0){
		printf("Nice!");
	}
	else if(d > r){
		printf("Away!");
	}
	else{ // d < r
		printf("Oh No!");
	}
}
