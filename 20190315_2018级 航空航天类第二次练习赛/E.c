#include <stdio.h>

int main(){
	//��򵥵��߼���ֱ��λ������ڴ���Ķ��������
	//�������ÿ���ʲôԭ�벹�� 
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
