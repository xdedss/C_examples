#include <stdio.h>
#include <stdbool.h> 

//����������Ҫ��������������Ȱѽ��յ���ֵ���������ٵ��������
//����Ҫ�õ�����ṹ 
int main(){
	char c;
	char index = 0;
	char array[128];
	while(~scanf("%c", &c)){                           //���ϵض�ȡ��һ���ַ�ֱ������ 
		if((c<=90 && c>=65) || (c<=122 && c>=97)){     //�����һ����ĸ 
			array[index++] = c;                        //��ӵ������� 
		}
	}
	while(index){
		printf("%c", array[--index]);       //����������� 
	}
}
