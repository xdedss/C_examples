#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
	//�����п��ܻᳬʱ
	//�����ʱ�Ļ����ȿ���scanf���벿�ֶԲ���
	//Ȼ���ٿ��ж�������Ч�ʣ������Ż���ƽ���� 
	int n, m;
	scanf("[%d,%d]", &n, &m);
	int a = n;
	while(a <= m){
		int limit = (int)sqrt(a);//�жϵ�ƽ�������� 
		int i = 2;
		bool isPrime = true;
		while(i <= limit){
			if(a % i == 0){
				isPrime = false;
				break;
			}
			i++;
		}
		if(isPrime){
			printf("%d ", i);
		}
		i++;
	}
}
