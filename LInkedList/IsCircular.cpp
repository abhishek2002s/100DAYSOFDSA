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

int isCircular(Node* &head)
{
if(head == NULL)
{
    return 1;
}

    Node* temp = head -> next;
    while(temp != head )
    {
          temp = temp -> next;
    }
    return (temp == head);
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
      six->next = head;


  if(isCircular(head))
  cout<<"Yes it is circular"<<endl;
  else{
    cout<<"No its not circular";
  }
    
}