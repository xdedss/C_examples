#include <stdio.h>

int main(){
	//最简单的逻辑是直接位运算把内存里的东西打出来
	//甚至不用考虑什么原码补码 
	int n;
	scanf("%d", &n);
	int i = 32;
	while(i){
		if(n & (1 << --i)){
			printf("1");
		}
		else{
			printf("0");
		}
	}
}
