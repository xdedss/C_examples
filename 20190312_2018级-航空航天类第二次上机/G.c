#include <stdio.h>
#include <math.h>

int main(){
	int num;
	scanf("%d", &num);
	
	int limit = (int)sqrt(num);//�����Ե�ƽ�������� 
	int i = 2;//��2��ʼ�� 
	while(i <= limit){
		if(num % i == 0){
			printf("0");//�������� 
			return 0;//�������� 
		}
		i++;
	}
	printf("1");//�����˻�û�н���˵�������� 
}
