/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    Node* fast=head;
    Node* slow=head;
    Node* entry= head;
    if(head==NULL || head->next==NULL){
        return 0;
    }
 
    while(fast!=NULL && fast ->next != NULL){
        fast=fast->next->next;
        slow=slow->next;
      
        if(fast==slow){
            while(slow!=entry){
                slow=slow->next;
                entry=entry->next;
            }
            return slow;
        }
    }
    return 0;
}
