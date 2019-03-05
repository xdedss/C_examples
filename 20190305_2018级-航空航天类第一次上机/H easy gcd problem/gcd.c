#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	//¢ÙÕ·×ªÏà³ý·¨ 
	while(a != b){
		if(a > b){
			a -= b;
		}
		else{
			b -= a;
		}
	}
	
	printf("%d", a);
}
