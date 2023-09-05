/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)

{   

    if(head->next==NULL){

        return head;

    } 

    Node *curr=head;

    Node *temp;

    while(curr!=NULL){

        temp=curr->prev;

        curr->prev=curr->next;

        curr->next=temp;

        curr=curr->prev;

    }

    head=temp->prev;

    return head;

}

