class Solution {
  public:
    Node* addOne(Node* head) {
        // Your Code here
         // return head of list after adding one
        Node *curr = head, *nxt = head->next, *prev = NULL;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        Node *lastHead = prev;
        while(prev){
            if(prev->data!=9){
                prev->data+=1;
                break;
            }
            else prev->data=0;
            prev=prev->next;
        }
        if(!prev)head->next = new Node(1);
        curr = lastHead;
        nxt = lastHead->next;
        prev = NULL;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
        // return head of list after adding one
    }
};