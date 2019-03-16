#include <stdio.h>

int main(){
	//B题的数组写法 
	int arr[5];
	int c = 0;
	double average = 0;
	while(c < 5) {
		scanf("%d", &arr[c]);
		average += arr[c]
		c++;
	}
	average /= 5;
	
	/*
	冒泡排序：依次比较相邻元素，如果顺序错误就交换过来
	这里假定正确的顺序是从左到右从小到大
	所以如果左边元素比右边大就交换
	首先按上面的规则依次比较 0和1  1和2  2和3  3和4 这几组相邻位置
	处理完成后最大的数就会跑到 4号位置
	之后依次比较 0和1  1和2  2和3  
	第二大的数就会跑到 3号位置 
	之后依次比较 0和1  1和2 
	第三大的数就会跑到 2号位置 
	第三大的数就是中位数 ，打印出 2号位置的数即可 
	*/ 
	int i, j;
	for(i = 4; i > 1; i--){//i>1即可，因为最后两个数顺序无关紧要 
		for(j = 0; j < i; j++){
			if(arr[j] > arr[j + 1]){
				arr[j] ^= arr[j + 1];
				arr[j + 1] ^= arr[j];
				arr[j] ^= arr[j + 1];
			}
		}
	}
	
	printf("%d\n", arr[2]);
	printf("%.2lf", average);
	
	//此题还可以拓展到任意个输入数字求中位数和平均数 
}
