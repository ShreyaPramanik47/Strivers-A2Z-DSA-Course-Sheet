/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    // Write your code here
    Node* fast=head;
    Node* slow=head;
    Node* entry=head;
    if(head==NULL || head->next==NULL){
        return 0;
    }
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            while(slow!=entry){
              slow=slow->next;
              entry=entry->next;  
            }
            entry=entry->next;
            int temp=1;
            while(entry!=slow){
                entry=entry->next;
                temp++;
            }
            return temp;
        }
        
    }
    return 0;

}
