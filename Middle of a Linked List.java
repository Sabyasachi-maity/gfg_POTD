class Solution {
    int getMiddle(Node head) {
        // Your code here.
         Node slow = head, fast = head.next;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        return fast!=null?slow.next.data:slow.data;
    }
}