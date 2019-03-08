#include <stdio.h>
#include <stdbool.h> 

//这题由于需要逆序输出，必须先把接收到的值存起来，再倒过来输出
//所以要用到数组结构 
int main(){
	char c;
	char index = 0;
	char array[128];
	while(~scanf("%c", &c)){                           //不断地读取下一个字符直到结束 
		if((c<=90 && c>=65) || (c<=122 && c>=97)){     //如果是一个字母 
			array[index++] = c;                        //添加到数组里 
		}
	}
	while(index){
		printf("%c", array[--index]);       //逆序输出数组 
	}
}
