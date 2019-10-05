/*
给定一个二进制数组， 计算其中最大连续1的个数。

示例 1:

输入: [1,1,0,1,1,1]
输出: 3
解释: 开头的两位和最后的三位都是连续1，所以最大连续1的个数是 3.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/max-consecutive-ones
class Solution {
public int findMaxConsecutiveOnes(int[] nums) {
int count=0;
int maxcount=0;
for(int i=0;i<nums.length;i++){
if(nums[i]==1){
count++;
}if(nums[i]!=1){
count=0;
}if(count>maxcount){
maxcount=count;
}
}
return maxcount;
}
}

2.
给定由一些正数（代表长度）组成的数组 A，返回由其中三个长度组成的、面积不为零的三角形的最大周长。

如果不能形成任何面积不为零的三角形，返回 0。

class Solution {
public int largestPerimeter(int[] A)
{
Arrays.sort(A);
for(int i=A.length-1;i>=2;i--)
{
int s1=A[i];
int s2=A[i-1];
int s3=A[i-2];
if(s1-s2<s3)
{
return s1+s2+s3;
}
}
return 0;

}
}

3.
不使用运算符 + 和 - ​​​​​​​，计算两整数 ​​​​​​​a 、b ​​​​​​​之和。
class Solution {
public int getSum(int a, int b) {
int i=(a&b)*2;
int j=a^b;
return i+j;
}
}

4.
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。



来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-search
class Solution {
public int search(int[] nums, int target) {
int left=0;
int right=nums.length-1;
int mid=0;
while(left<=right){
mid=(left+right)/2;
if(nums[mid]==target){
return mid;
}if(nums[mid]>target){
right=mid-1;
}else{
left=mid+1;
}
}
return -1;
}
}

5.
给定一个整数 n，返回 n! 结果尾数中零的数量。
class Solution {
public int trailingZeroes(int n) {
if(n<5){
return 0;
}else{
return n/5+trailingZeroes(n/5);
}

}
}
*/