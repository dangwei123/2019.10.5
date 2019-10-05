/*
1.给定一个整数，编写一个函数来判断它是否是 2 的幂次方。
class Solution {
public boolean isPowerOfTwo(int n) {
return n>0&&(n&(n-1))==0;
}
}

2.
给定一个整数，写一个函数来判断它是否是 3 的幂次方
class Solution {
public boolean isPowerOfThree(int n) {
if(n<1){
return false;
}else{
while(n%3==0){
n/=3;
}
return n==1;
}
}
}

3.
给定一个整数 (32 位有符号整数)，请编写一个函数来判断它是否是 4 的幂次方。

class Solution {
public boolean isPowerOfFour(int num) {
if(num<1){
return false;
}else{
while(num%4==0){
num/=4;
}
return num==1;
}
}
}

4.
实现 int sqrt(int x) 函数。

计算并返回 x 的平方根，其中 x 是非负整数。

由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sqrtx
class Solution {
public int mySqrt(int x) {
if(x==0){
return 0;
}
int i=1;
while(x/i>i){
i++;
}if(x/i==i){
return i;
}else{
return i-1;
}
}
}

5.
统计字符串中的单词个数，这里的单词指的是连续的不是空格的字符。

请注意，你可以假定字符串里不包括任何不可打印的字符。

示例:

输入: "Hello, my name is John"
输出: 5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/number-of-segments-in-a-string
class Solution {
public int countSegments(String s) {
char[] arr=s.toCharArray();
int i=0;
int flag=1;
int count=0;
while(i<s.length()){
char c=s.charAt(i);
if(c==' '){
flag=1;
}if(flag==1&&c!=' '){
count++;
flag=0;
}
i++;
}
return count;
}
}
*/