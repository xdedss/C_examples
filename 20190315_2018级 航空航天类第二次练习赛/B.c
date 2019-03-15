#include <stdio.h>

int main(){
	//这题可以先排序再输出中间的
	//或者先找最大，再找次大，再找第三大 
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	double average = a + b + c + d + e;
	average /= 5;
		
	//又是一个展开的冒泡排序...(写数组循环也行) 
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
	//最后 d 和 e 不用管了，只需要取 c 
	
	printf("%d\n", c);
	printf("%.2lf", average);
}
