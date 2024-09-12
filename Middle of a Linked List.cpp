class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
          Node *slow = head, *fast = head->next;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return fast!=NULL?slow->next->data:slow->data;
    }
};