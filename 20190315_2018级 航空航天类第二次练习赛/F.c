#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
	//这题有可能会超时
	//如果超时的话首先看看scanf输入部分对不对
	//然后再看判断质数的效率，可以优化成平方根 
	int n, m;
	scanf("[%d,%d]", &n, &m);
	int a = n;
	while(a <= m){
		int limit = (int)sqrt(a);//判断到平方根即可 
		int i = 2;
		bool isPrime = true;
		while(i <= limit){
			if(a % i == 0){
				isPrime = false;
				break;
			}
			i++;
		}
		if(isPrime){
			printf("%d ", i);
		}
		i++;
	}
}
