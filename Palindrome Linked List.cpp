class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        Node *slow=head,*fast=head->next;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *curr=slow->next,*prev=NULL,*nxt=NULL;
        slow->next=NULL;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        while(prev){
            if(prev->data!=head->data)return false;
            prev=prev->next;
            head=head->next;
        }
        return true;
    }
};