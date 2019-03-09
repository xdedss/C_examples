#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
	// 先做 E 和 F，简单而且没什么坑 
	
	
	
	//A Ausar的除法
	
	printf("----A Ausar的除法\n");
	//①通过乘以一个浮点数转换 
	int i1 = 2333;
	printf("i1 * 1.0 = %lf\n", i1 * 1.0);
	//②强制类型转换
	//由int转double
	int i2 = 233;
	double d2 = (double)i2;
	printf("d2 = (double)i2 = %lf\n", d2);
	//由double转int，会舍去小数位 
	double d3 = 233.33333;
	int i3 = (int)d3;
	printf("i3 = (int)d3 = %d\n", i3);
	
	//坑：不要化简为 ac/b
	//整数运算需要先判断 c 是否为零，再判断 (b/c) 是否为零（注意b不为零时b/c可能为零） 
	//浮点数运算可以直接判断 b 和 c 是否为零 
	printf("\n\n"); 
	
	
	
	
	//B 闰年 
	
	//如果y % 400 == 0 则一定是闰年
	//否则如果 y % 100 == 0 则一定不是闰年
	//否则如果 y % 4 == 0 则是闰年
	//否则不是闰年 
	
	
	
	
	//C lx的bitOr 
	
	//坑：不让用或运算符
	//a | b  ==  ~(~a & ~b) 
	
	
	
	
	//D bzbd的td
	
	printf("----D bzbd的td\n");
	int td = 1000;
	//直接打出大写十六进制，用 %X 
	printf("%X\n", td);
	//直接打出八进制，用 %o
	printf("%o\n", td);
	//打出二进制需要算一算
	//方法1 按除以二取余的方式
	int bitCount = 0;
	int a = td;
	int sum = 0;
	while(a){
		int mod = a % 2;
		sum += pow(10, bitCount) * mod;
		a /= 2;
		bitCount++;
	}
	printf("%d\n", sum);
	//方法2 位运算
	int bitIndex = 10;//最大1000不会超过10位
	bool hadNum = false;
	while(bitIndex > 0){
		bitIndex--;
		bool hasNum = td & (1 << bitIndex);//<<移位操作判断这一位有没有数 
		hadNum |= hasNum;
		hadNum |= bitIndex == 0;
		printf(hadNum ? hasNum ? "1" : "0" : "");
	}
	
	
	
	//G 解析见同目录下的 G.c 文件 
	 
}
