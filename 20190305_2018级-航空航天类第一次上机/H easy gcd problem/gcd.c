#include <stdio.h>

int main(){
	
	//��շת����� ���򻯰棩
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
	
	
	//�ڲο�ppt�ϵ�ö�ٷ� 
	
}
