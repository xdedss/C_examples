#include <stdio.h>
#include <math.h>

int main(){
	int num;
	scanf("%d", &num);
	
	int limit = (int)sqrt(num);//试数试到平方根即可 
	int i = 2;//从2开始试 
	while(i <= limit){
		if(num % i == 0){
			printf("0");//不是质数 
			return 0;//结束程序 
		}
		i++;
	}
	printf("1");//试完了还没有结束说明是质数 
}
