#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
	// ���� E �� F���򵥶���ûʲô�� 
	
	
	
	//A Ausar�ĳ���
	
	printf("----A Ausar�ĳ���\n");
	//��ͨ������һ��������ת�� 
	int i1 = 2333;
	printf("i1 * 1.0 = %lf\n", i1 * 1.0);
	//��ǿ������ת��
	//��intתdouble
	int i2 = 233;
	double d2 = (double)i2;
	printf("d2 = (double)i2 = %lf\n", d2);
	//��doubleתint������ȥС��λ 
	double d3 = 233.33333;
	int i3 = (int)d3;
	printf("i3 = (int)d3 = %d\n", i3);
	
	//�ӣ���Ҫ����Ϊ ac/b
	//����������Ҫ���ж� c �Ƿ�Ϊ�㣬���ж� (b/c) �Ƿ�Ϊ�㣨ע��b��Ϊ��ʱb/c����Ϊ�㣩 
	//�������������ֱ���ж� b �� c �Ƿ�Ϊ�� 
	printf("\n\n"); 
	
	
	
	
	//B ���� 
	
	//���y % 400 == 0 ��һ��������
	//������� y % 100 == 0 ��һ����������
	//������� y % 4 == 0 ��������
	//���������� 
	
	
	
	
	//C lx��bitOr 
	
	//�ӣ������û������
	//a | b  ==  ~(~a & ~b) 
	
	
	
	
	//D bzbd��td
	
	printf("----D bzbd��td\n");
	int td = 1000;
	//ֱ�Ӵ����дʮ�����ƣ��� %X 
	printf("%X\n", td);
	//ֱ�Ӵ���˽��ƣ��� %o
	printf("%o\n", td);
	//�����������Ҫ��һ��
	//����1 �����Զ�ȡ��ķ�ʽ
	int bitCount = 0;
	int a = td;
	int sum = 0;
	while(a){
		int mod = a % 2;
		sum += pow(10, bitCount) * mod;
		a /= 2;
		bitCount++;
	}
	printf("%d\n", sum);
	//����2 λ����
	int bitIndex = 10;//���1000���ᳬ��10λ
	bool hadNum = false;
	while(bitIndex > 0){
		bitIndex--;
		bool hasNum = td & (1 << bitIndex);//<<��λ�����ж���һλ��û���� 
		hadNum |= hasNum;
		hadNum |= bitIndex == 0;
		printf(hadNum ? hasNum ? "1" : "0" : "");
	}
	
	
	
	//G ������ͬĿ¼�µ� G.c �ļ� 
	 
}
