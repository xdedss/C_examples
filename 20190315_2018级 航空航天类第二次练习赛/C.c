#include <stdio.h>

int main(){
	//�����������֪����0:0:0֮���n���غϵķ�������720n/11 
	int n;
	scanf("%d", &n);
	n = n - 12 * (n / 12);//��Ϊ12�������� 
	double minutes_double = 720. * n / 11.;
	double seconds_double = (minutes_double - (int)minutes_double) * 60;
	int hours = (int)(minutes_double / 60);
	int minutes = (int)(minutes_double - hours * 60);
	if(hours == 12) hours = 0;//һ��Ǳ�ڵĿӣ�12:00����0:00 
	printf("%d:%d:%.7lf", hours, minutes, seconds_double);
	
}
