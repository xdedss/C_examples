#include <stdio.h>

int overlap(int a_min, int a_max, int b_min, int b_max){
	int min = a_min;
	if(b_min > min){
		min = b_min;
	}//ȡ�½�����ֵ 
	int max = a_max;
	if(b_max < a_max){
		max = b_max;
	}//ȡ�Ͻ����Сֵ 
	int len = max - min;//�غϵĳ��� 
	return len > 0 ? len : 0;//����غ�С����˵��û���غϣ�����0 
}

int main(){
	//����������������ص�������� ���ټ�ȥ�ص� 
	int a_left, a_right, a_up, a_down;
	int b_left, b_right, b_up, b_down;
	scanf("%d %d %d %d", &a_left, &a_down, &a_right, &a_up);
	scanf("%d %d %d %d", &b_left, &b_down, &b_right, &b_up);
	int sum = (a_right - a_left) * (a_up - a_down) + (b_right - b_left) * (b_up - b_down);
	int c = overlap(a_left, a_right, b_left, b_right) * overlap(a_down, a_up, b_down, bu);//�����غϳ��������غ� 
	printf("%d", sum - c);
}
