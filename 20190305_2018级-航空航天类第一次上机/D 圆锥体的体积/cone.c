#include <stdio.h>
#include <math.h>

int main(){
	/*
	Ҫ�㣺
	PI�Ķ��壬���Ȳ�Ҫд��̫��
	ƽ����sqrt��ʹ��ǰ��Ҫ����math.h 
	�����λС����%.2f ����Ҫд%6.2f��������Զ���ǰ�油�ո��¸�ʽ���� 
	float�ĳ�doubleҲ�У�����������float���Ⱦ͹��� 
	*/ 
	
	float l, r;
	float PI = 3.1415927f;
	scanf("%f %f", &l, &r);
	float height = sqrt(l * l - r * r);
	float area = PI * r * r;
	printf("%.2f", height * area / 3);
	return 0;
}
