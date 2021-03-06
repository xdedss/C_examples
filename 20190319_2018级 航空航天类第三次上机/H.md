# H题思路

## 1、条件：
数列{an}中有一个数的出现次数多于一半  
【由于数据多，不能用数组存储计数】  

## 2、分析
由条件可以得出**推论1**：  
> 将数列从任意处分割成两个数列  
> a1, a2, ... , ai  
> 和  
> ai+1, ai+2, ...,an  
> 至少其中一个数列中，该数出现的次数多于一半  

进一步得出**推论2**：  
> 如果分割成前后两个数列后，发现前一个数列没有任何数超过一半，则在后一个数列中，我们要找的数必定出现次数超过一半  


## 3、解题步骤：  
读取第一个数a1之后，可以认为我们把数列分成了两部分  
a1  
a2, a3, ... ,an   
则在第一部分中共一个数，a1出现了一次，过半了，先记下a1及其出现的次数1  
  
读取第二个数a2之后，分割发生了变化  
a1, a2  
a3, a4, ... ,an  
下面判断a1和a2是不是相等  
如果相等，那么把a1出现的次数加一  
如果不相等，就把a1出现的次数减一  
这时候如果发现次数仍然大于零，就继续进行【读取下一个数--判断和a1是否相等--如果相等让次数加一，不相等就让次数减一】这样的循环；  
  
#### **如果次数变成0了**  
这意味着在之前读到的所有数组成的这个数列里，a1出现的次数恰好为一半；  
既然a1在已读到的数列中恰好占了一半，**没有超过一半**，其它数字出现的次数肯定比a1更少，也**都没有超过一半**；  
于是引用**推论2**，可知在尚未读到的后面的一大串数列中，我们要找的数字出现次数必定超过一半。  
也就是说，现在前面那些数变得无关紧要了，我们可以把之前读到的所有数都抛弃掉，只看后面的那些数，就能从中找出正确答案。  
  
将后面那些还没有读到的数当成一个新的数列，把下一项当作a1，不断重复上述所有操作，这样剩余的数列将会被不断地读取，分割，舍弃，使得剩余的数列越来越短  
  
#### **如果所有数都读完了次数依然没有变成0**  
恭喜你，这意味着你找到了你需要的数。没有变成0意味着当前剩余的还没有遭到抛弃的数列的第一项的出现次数超过了一半，这个数字就是最终结果。  
  
  
## 4、实际操作  
#### 需要初始化的变量：  
两个整数  
一个是a1，用来储存当前还未被抛弃的数列的第一项  
一个是用来储存上述过程中a1出现的次数，记为m，初值为0    
    
while循环读取数据，每次读取一个新数据a  
如果m为0，意味着数列刚开始，令a1=a，m=1  
如果m不为0，a与a1比较，如果相等让m加一，不相等就让m减一；如果m减到了0，那么下一次循环中就会自然地把下一项当成a1，重新开始。  
  
数据读完后，a1的值就是结果。  
