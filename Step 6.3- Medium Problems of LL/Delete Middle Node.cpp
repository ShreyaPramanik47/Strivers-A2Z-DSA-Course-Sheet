/*
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
*/

Node* deleteMiddle(Node* head){
    // Write your code here.
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    int mid=cnt/2;
    int cntt=0;
    Node* temp2=head;
    while(cntt!=(mid-1)){
        temp2=temp2->next;
        cntt++;
        // if(cntt==mid){
        //     break;
        // }
    }
    Node* deleteNode = temp2->next;
    temp2->next=temp2->next->next;
    delete(deleteNode);
    return head;


    

}
