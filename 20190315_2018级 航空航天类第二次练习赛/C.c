#include <stdio.h>

int main(){
	//经过计算可以知道从0:0:0之后第n次重合的分钟数是720n/11 
	int n;
	scanf("%d", &n);
	n = n - 12 * (n / 12);//化为12以内整数 
	double minutes_double = 720. * n / 11.;
	double seconds_double = (minutes_double - (int)minutes_double) * 60;
	int hours = (int)(minutes_double / 60);
	int minutes = (int)(minutes_double - hours * 60);
	if(hours == 12) hours = 0;//一个潜在的坑：12:00等于0:00 
	printf("%d:%d:%.7lf", hours, minutes, seconds_double);
	
}
