#include <stdio.h>

int main(){
	//�������������������м��
	//��������������Ҵδ����ҵ����� 
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	double average = a + b + c + d + e;
	average /= 5;
		
	//����һ��չ����ð������...(д����ѭ��Ҳ��) 
	if(d < e){
		d ^= e;
		e ^= d;
		d ^= e;
	}
	if(c < d){
		c ^= d;
		d ^= c;
		c ^= d;
	}
	if(b < c){
		b ^= c;
		c ^= b;
		b ^= c;
	}
	if(a < b){
		a ^= b;
		b ^= a;
		a ^= b;
	}
	
	if(d < e){
		d ^= e;
		e ^= d;
		d ^= e;
	}
	if(c < d){
		c ^= d;
		d ^= c;
		c ^= d;
	}
	if(b < c){
		b ^= c;
		c ^= b;
		b ^= c;
	}
	
	if(d < e){
		d ^= e;
		e ^= d;
		d ^= e;
	}
	if(c < d){
		c ^= d;
		d ^= c;
		c ^= d;
	}
	//��� d �� e ���ù��ˣ�ֻ��Ҫȡ c 
	
	printf("%d\n", c);
	printf("%.2lf", average);
}
