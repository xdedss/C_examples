#include <stdio.h>

int main()
{
	//分析：如果直接比较abc，情况比较复杂
	//可以选择先把abc排好序，要简单一些
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	//展开的冒泡排序...
	if(a > b)
	{
		//交换ab 
		b ^= a;
		a ^= b;
		b ^= a;
	}
	if(b > c)
	{
		c ^= b;
		b ^= c;
		c ^= b;
	}
	if(a > b)
	{
		b ^= a;
		a ^= b;
		b ^= a;
	}

	if(a >= b + c)
	{
		printf("not a triangle!\\n");//反斜杠转义  
	}
	else if(a == c)
	{
		printf("equilateral triangle!\"");//双引号转义  
	}
	else if(a == b || b == c)
	{
		printf("isosceles triangle!\\\\");//反斜杠转义  
	}
	else
	{
		printf("regular triangle!%%d");//百分号转义，这个转义不是字符串表达的转义而是printf关键字转义，用%%，不是加反斜杠 
	}

}
