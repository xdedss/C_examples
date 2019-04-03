# H 方程

## 分析

需要根据a、b、c是否等于0讨论

a==0时：  
&nbsp;&nbsp;&nbsp;&nbsp;b==0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;c==0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;方程为 0 = 0，无穷多解  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;c!=0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;方程为 1/x = 0，无解  
&nbsp;&nbsp;&nbsp;&nbsp;b!=0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;c==0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;方程为 0 = 1，无解  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;c!=0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;方程为 c/x = b，解为 c/b  
 a!=0时：  
&nbsp;&nbsp;&nbsp;&nbsp; c==0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;b==0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ax = 0，又因为x不能等于0，所以无解  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;b!=0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;方程为 ax = b，解为 b/a  
&nbsp;&nbsp;&nbsp;&nbsp;c!=0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Δ = b^2 - 4ac  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Δ==0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;有一个解，b/2a  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Δ<0时：   
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;无实根   
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Δ>0时：  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;x = (b±sqrt(Δ))/2a  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;注意输出两个数时要求左边的小于右边的  

## 实现

```c
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    //ax^2-bx+c=0
    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("Infinite solutions."); //   0 = 0
            }
            else{
                printf("No solution."); //   1/x = 0
            }
        }
        else{
            if(c == 0){
                printf("No solution."); //   0 = 1
            }
            else{
                printf("%.2lf", (double) c / b); //   c/x = b
            }
        }
    }
    else{
        if(c == 0){
            if(b == 0){
                printf("No solution.");//   ax = 0
            }
            else{
                printf("%.2lf", (double) b / a);//   ax = b
            }
        }
        else{// ax^2 - bx + c = 0
            int deltai = b * b - 4 * a * c;
            double delta = (double)deltai;
            if(deltai == 0){
                printf("%.2lf", (double) b / (2.0 * a));
            }
            else if(deltai < 0){
                printf("No solution.");
            }
            else{
                delta = sqrt(delta);
                double x1 = (b - delta) / (2.0 * a);
                double x2 = (b + delta) / (2.0 * a);
                if(x2 < x1){
                    double x = x1;
                    x1 = x2;
                    x2 = x;
                } 
                printf("%.2lf %.2lf", x1, x2);
            }
        }
    }
}
```
