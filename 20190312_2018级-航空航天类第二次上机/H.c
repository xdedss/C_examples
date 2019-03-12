#include <stdio.h>

int main(){
	//n是奇数->错误 
	//算出来的数量小于零->也是错误 
	int m, n;
	scanf("%d %d", &m, &n);
	if(n % 2 != 0){
		printf("Wrong number");
		return 0;
	}
	int t = n / 2 - m;
	int j = m - t;
	if(t < 0 || j < 0){
		printf("Wrong number");
		return 0;
	}
	printf("%d %d", j, t);
}
