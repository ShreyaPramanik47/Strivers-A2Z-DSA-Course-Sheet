/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {

    if(head==NULL || head->next==NULL)

    {

        return head;

    }

    Node *temp=head;

    int cnt=0;

    while(temp)

    {

        cnt++;

        temp=temp->next;

    }

    temp=head;

    Node *newhead=NULL;

    bool isfir=true;

    Node *prevt=NULL;

    while(cnt>=k)

    {

        Node *prev=NULL;

        Node *h=temp;

        for(int i=0;i<k;i++)

        {

            Node *curr=temp->next;

            temp->next=prev;

            prev=temp;

            temp=curr;

        }

        if(isfir)

        {

            newhead=prev;

            prevt=h;

            isfir=false;

        } 

        else {

            prevt->next = prev;

            prevt = h;

        }

        cnt=cnt-k;

        if(cnt-k<0)

        {

            prevt->next=temp;

        }

    }

    return newhead;

}