#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }

    cout<<endl;
}

int getLength(Node* &head)
{
    Node*temp = head;
    int len =0;

    while(temp != NULL)
    {
        temp = temp -> next;
        len++;
    }
    return len;
}

Node* reverseKNodes(Node* &head,int k)
{
    if(head == NULL)
    {
        cout<<"LL is empty"<<endl;
        return NULL;
    }

    int len = getLength(head);
    if(k>len)
    {
        return head;
    }

    //it means number of nodes in LL is >=k
    //step A : reverse a first k nodes of LL
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr -> next;
    int count =0;

    while(count<k)
    {
        forward = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    //step B: recursive call

    if(forward != NULL)
    {
        //we still have node left to reverse
      head -> next =   reverseKNodes(forward,k);
    }
    //stepC: return head of the modified linked list
    return prev;
}

int main()
{
    Node* head = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* forth = new Node(50);
    Node* fifth = new Node(60);
    Node* six = new Node(70);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = six;
    six->next = NULL;

    print(head);
    cout<<endl;
    head = reverseKNodes(head,6);
    print(head);
    
}