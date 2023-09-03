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

Node *deleteLast(Node *list){
    // Write your code here
    Node* temp=list;
    while(temp->next!=NULL){
        temp=temp->next;  
    }
    Node* beforeTemp=list;
    while(beforeTemp->next->next!=NULL){
        beforeTemp=beforeTemp->next;
    }
    beforeTemp->next=NULL;
    delete(temp);
    return list;

}
