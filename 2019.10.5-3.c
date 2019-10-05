/*
1.反转一个单链表。

示例:

输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL

* Definition for singly-linked list.
* public class ListNode {
*     int val;
*     ListNode next;
*     ListNode(int x) { val = x; }
* }

class Solution {
	public ListNode reverseList(ListNode head) {
		ListNode pre = null;
		ListNode cur = head;
		while (cur != null){
			ListNode next = cur.next;
			cur.next = pre;
			pre = cur;
			cur = next;
		}
		return pre;
	}
}
2
删除链表中等于给定值 val 的所有节点。

示例:

输入: 1->2->6->3->4->5->6, val = 6
输出: 1->2->3->4->5

* Definition for singly-linked list.
* public class ListNode {
*     int val;
*     ListNode next;
*     ListNode(int x) { val = x; }
* }

class Solution {
	public ListNode removeElements(ListNode head, int val) {
		ListNode pre = new ListNode(-1);
		pre.next = head;
		ListNode cur = pre;
		while (cur.next != null){
			if (cur.next.val == val){
				cur.next = cur.next.next;
			}
			else{
				cur = cur.next;
			}
		}
		return pre.next;
	}
}

3.将两个有序链表合并为一个新的有序链表并返回。
新链表是通过拼接给定的两个链表的所有节点组成的。 

示例：

输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-two-sorted-lists

* Definition for singly-linked list.
* public class ListNode {
*     int val;
*     ListNode next;
*     ListNode(int x) { val = x; }
* }

class Solution {
	public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
		ListNode head = new ListNode(-1);
		ListNode cur = head;
		while (l1 != null&&l2 != null){
			if (l1.val<l2.val){
				cur.next = l1;
				cur = cur.next;
				l1 = l1.next;
			}
			else{
				cur.next = l2;
				cur = cur.next;
				l2 = l2.next;
			}
		}
		if (l1 == null){
			cur.next = l2;
		}
		else{
			cur.next = l1;
		}
		return head.next;
	}
}
*/