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

bool checkPalindrome(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while(start < end)
        if(arr[start++] != arr[end--])
            return false;
    return true;
}
bool isPalindrome(Node *head)
{
    // write your code here
    vector<int> arr;
    Node * temp = head;
    while(temp)
    {
        arr.push_back(temp -> data);
        temp = temp -> next;
    }
    return checkPalindrome(arr);
}
