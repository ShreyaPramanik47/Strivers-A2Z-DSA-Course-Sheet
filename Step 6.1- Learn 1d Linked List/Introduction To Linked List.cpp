/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* newNode = new Node(arr[0]);
    Node* head=newNode;
    for(int i=1; i<arr.size(); i++){
        Node* temp=new Node(arr[i]);
        newNode->next=temp;
        newNode=temp;
    }
    return head;
}