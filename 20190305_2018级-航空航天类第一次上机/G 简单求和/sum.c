#include <stdio.h>

int main(){
	/*
	Ҫ�㣺
	��������͹�ʽ���õ�ʱ��ע���������� 
	*/
	
	
	//����͹�ʽ 
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
	
	
	//�� ��ѭ���ۼ� 
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
