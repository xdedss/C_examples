#include <stdio.h>
#include <math.h>

int main(){
	/*
	Ҫ�㣺
	PI�Ķ��壬���Ȳ�Ҫд��̫��
	ƽ����sqrt��ʹ��ǰ��Ҫ����math.h 
	�����λС����%.2f ����Ҫд%6.2f 
	*/ 
	
	float l, r;
	float PI = 3.14159265f;
	scanf("%f %f", &l, &r);
	float h = sqrt(l * l - r * r);
	float s = PI * r * r;
	printf("%.2f", h * s / 3);
	return 0;
}
