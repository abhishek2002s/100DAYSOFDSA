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

bool checkForLoop(Node* &head){
    if(head == NULL)
    {
        cout<<"LL is empty";
        return false;
    }


    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast -> next;

        if(fast != NULL)
        {
            fast = fast ->next;
            slow = slow -> next;
        }

        if(slow == fast)
        {
            //loop present
            return true;
        }

    }
    //loop absent
    return false;

}

Node* StartingPoint(Node* &head){
    if(head == NULL)
    {
        cout<<"LL is empty";
    }


    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast -> next;

        if(fast != NULL)
        {
            fast = fast ->next;
            slow = slow -> next;
        }

        if(slow == fast)
        {
            slow = head;
            break;
        }


    }
    //loop absent
    while(slow != fast)
    {
        slow= slow -> next;
        fast = fast -> next;
    }

    return slow;

}




int main()
{
    Node* head = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* forth = new Node(50);
    Node* fifth = new Node(60);
    Node* six = new Node(70);
    Node* seven = new Node(70);
    Node* eight = new Node(70);
    Node* nine = new Node(70);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = six;
      six->next = seven;
      seven->next = eight;
      eight->next = nine;
      nine -> next = forth;

      cout<<"Loop is presnt or not "<<checkForLoop(head);
      cout<<endl;
      cout<<"Starting point of loop is "<<StartingPoint(head) -> data<<endl;


}