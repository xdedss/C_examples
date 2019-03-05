#include <stdio.h>

int main(){
	/*
	要点：
	可以用求和公式，用的时候注意整数除法 
	*/
	
	
	//①求和公式 
	int n;
	scanf("%d", &n);
	int result = ((n + 1) * n) / 2;
	if(n <= 0){
		printf("WRONG FORMAT!");
	}
	else{
		printf("%d", result);
	}
	return 0;
	
	
	//② 用循环累加 
	int n;
	scanf("%d", &n);
	if(n <= 0){
		printf("WRONG FORMAT!");
	}
	else{
		int result = 0;
		for(int i = 1; i <= n; i++){
			result += i;
		}
		printf("%d", result);
	}
	return 0;
	
	
}
