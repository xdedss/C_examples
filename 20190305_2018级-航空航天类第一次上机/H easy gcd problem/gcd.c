#include <stdio.h>

int main(){
	
	//①辗转相除法 （简化版）
	int a, b;
	scanf("%d %d", &a, &b);
	while(a != b){
		if(a > b){
			a = a - b;
		}
		else{
			b = b - a;
		}
	}
	printf("%d", a);
	return 0;
	
	
	//②参考ppt上的枚举法 
	
}
