#include <stdio.h>

int main()
{
	//���������ֱ�ӱȽ�abc������Ƚϸ���
	//����ѡ���Ȱ�abc�ź���Ҫ��һЩ
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	//չ����ð������...
	if(a > b)
	{
		//����ab 
		b ^= a;
		a ^= b;
		b ^= a;
	}
	if(b > c)
	{
		c ^= b;
		b ^= c;
		c ^= b;
	}
	if(a > b)
	{
		b ^= a;
		a ^= b;
		b ^= a;
	}

	if(a >= b + c)
	{
		printf("not a triangle!\\n");//��б��ת��  
	}
	else if(a == c)
	{
		printf("equilateral triangle!\"");//˫����ת��  
	}
	else if(a == b || b == c)
	{
		printf("isosceles triangle!\\\\");//��б��ת��  
	}
	else
	{
		printf("regular triangle!%%d");//�ٷֺ�ת�壬���ת�岻���ַ�������ת�����printf�ؼ���ת�壬��%%�����Ǽӷ�б�� 
	}

}
