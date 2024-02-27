#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;

    Node()
    {
        this -> data = 0;
        this -> next = NULL;
    }

    Node(int data)
    {
        this -> data = data;
        this-> next = NULL;
    }
};

Node* reverse(Node* head)
{
    Node* prev= NULL;
    Node*  curr = head;
    Node* forward = curr -> next;

    while(curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}


bool  checkPallindrome(Node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }

    if(head -> next == NULL)
    {
        //only 1 node
        return true;
    }

    //>1 node in LL
    Node* slow = head;
    Node* fast = head->next;

    while(fast  != NULL)
    {
        fast = fast -> next;
        if(fast != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
    }

    //slow pointer is pointing to the middle node

    //Step B : reverse the LL after the Middle Points
    Node* reverseeLLkaHead = reverse(slow->next);

//join the reverseLLkahead to the left part of LL
    slow -> next = reverseeLLkaHead;

    //Step c: start Coparision
    Node* temp1 = head;
    Node* temp2 = reverseeLLkaHead;

    while(temp2 != NULL)
    {
        if(temp1 -> data != temp2 -> data)
        {
            //not pallindrome
            return false;
        }
        else{
            //age badh jao
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    }
    return true;
}


int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(300);
    Node* forth = new Node(900);
    Node* fifth = new Node(20);
    Node* sixth = new Node(10);
    // Node* sixth = new Node(10);

    head -> next = second;
    second -> next = third;
    third -> next = forth;
    forth -> next = fifth;
    fifth -> next = sixth;

    bool isPlaiindrome = checkPallindrome(head);

    if(isPlaiindrome){
        cout<<"LL is a valid palindrome"<<endl;
    }
    else
    {
        cout<<"LL is not a pallindrome "<<endl;
    }
}