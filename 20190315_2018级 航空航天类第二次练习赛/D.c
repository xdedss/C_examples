#include <stdio.h>

int overlap(int a_min, int a_max, int b_min, int b_max){//一维上的重合长度计算 
	int min = a_min > b_min ? a_min : b_min;//取下界的最大值 
	int max = a_max < b_max ? a_max : b_max;//取上界的最小值 
	int len = max - min;//重合的长度 
	return len > 0 ? len : 0;//如果重合小于零说明没有重合，返回0 
}

int main(){
	//可以先算出不考虑重叠的总面积 ，再减去重叠 
	int a_left, a_right, a_up, a_down;
	int b_left, b_right, b_up, b_down;
	scanf("%d %d %d %d", &a_left, &a_down, &a_right, &a_up);
	scanf("%d %d %d %d", &b_left, &b_down, &b_right, &b_up);
	int sum = (a_right - a_left) * (a_up - a_down) + (b_right - b_left) * (b_up - b_down);//不考虑重合的总面积 
	int c = overlap(a_left, a_right, b_left, b_right) * overlap(a_down, a_up, b_down, b_up);//横向重合乘以竖向重合 就是重合面积 
	printf("%d", sum - c);
}
